#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k,d;
    cin>>n>>k>>d;
    vector<long long>v(n+1),tot(n+1);
    tot[0]=1;
    for(long long i=1;i<=n;i++)
    {
        long long val = 0;
        for(long long j=1;j<=k;j++)
        {
            long long p = i-j<0 ? 0 : tot[i-j];
            val = (val+p)%M;
        }
        tot[i]=val;
    }
    v[0]=1;
    for(long long i=1;i<=n;i++)
    {
        long long val = 0;
        for(long long j=1;j<d;j++)
        {
            long long p = i-j<0 ? 0 : v[i-j];
            val = (val+p)%M;
        }
        v[i]=val;
    }
    (tot[n]-v[n])%M < 0 ? cout<<(tot[n]-v[n])%M + M : cout<<tot[n]-v[n];
    return 0;    
}

