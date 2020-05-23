#include<bits/stdc++.h>
using namespace std;
vector< vector<long long> > matrix(6,vector<long long>(6));
long long func(vector<long long> &v)
{
    long long hap = 0;
    hap += (matrix[v[0]][v[1]]+matrix[v[1]][v[0]]);
    hap += 2*(matrix[v[2]][v[3]] + matrix[v[3]][v[2]]);
    hap += (matrix[v[1]][v[2]] + matrix[v[2]][v[1]]);
    hap += 2*(matrix[v[3]][v[4]] + matrix[v[4]][v[3]]);
    return hap;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(long long i=1;i<6;i++)
        for(long long j=1;j<6;j++)
            cin>>matrix[i][j];
    long long ans = -1;
    vector<long long>v {1,2,3,4,5};
    do
    {
        ans = max(ans,func(v));
    } while(next_permutation(v.begin(),v.end()));
    cout<<ans;
    return 0;    
}

