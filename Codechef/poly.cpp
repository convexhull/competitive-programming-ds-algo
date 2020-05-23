#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long n;
        cin>>n;
        vector< vector<long long> > v(n,vector<long long>(4));
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<4;j++)
            {
                long long a;
                cin>>a;
                v[i][j]=a;
            }
        }
        long long q;
        cin>>q;
        for(long long i=0;i<q;i++)
        {
            long long t;
            cin>>t;
            vector<long long>ans;
            for(long long i=0;i<n;i++)
            {
                long long optimal = 0;
                for(long long j=0;j<4;j++)
                {
                    optimal += v[i][j]*(long long)pow(t,j);
                }
                ans.push_back(optimal);
            }
            cout<<*min_element(ans.begin(),ans.end())<<endl;
        }
    }
    return 0;
}

