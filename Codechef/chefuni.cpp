#include<bits/stdc++.h>
#define MAX numeric_limits<int>::max()
using namespace std;
long long result(long long X, long long Y, long long Z, long long A, long long B, long long C)
{
    vector< vector< vector<long long> > > cost(X, vector< vector<long long> > (Y, vector<long long>(Z,0)));
    for(long long i=0;i<X;i++)
    {
        for(long long j = 0;j<Y;j++)
        {
            for(long long k = 0;k<Z;k++)
            {
                vector<long long>val;
                val.push_back(i>0 ? cost[i-1][j][k]+A : MAX );
                val.push_back(j>0 ? cost[i][j-1][k]+A : MAX);
                val.push_back(k>0 ? cost[i][j][k-1]+A : MAX);
                val.push_back( (i>0 && j>0) ? cost[i-1][j-1][k]+B : MAX );
                val.push_back( (j>0 && k>0) ? cost[i][j-1][k-1]+B :MAX);
                val.push_back( (i>0 && k>0) ? cost[i-1][j][k-1]+B :MAX);
                val.push_back( (i>0 && j>0 && k>0) ? cost[i-1][j-1][k-1]+C : MAX);
                cost[i][j][k] = *min_element(val.begin(),val.end());
            }
        }
    }
    return cost[X-1][Y-1][Z-1]-MAX;
}    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long X,Y,Z,A,B,C;
        cin>>X>>Y>>Z>>A>>B>>C;
        cout<<result(X,Y,Z,A,B,C)<<endl;
    }
    return 0;
}

