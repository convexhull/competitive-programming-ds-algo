#include<bits/stdc++.h>
using namespace std;
vector<long long>sum;
long long psum(long long r,long long l)
{
    return sum[r]-sum[l-1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,m,k;
    cin>>n>>m>>k;
    sum.resize(n+1);
    for(long long i=1;i<=n;i++)
        cin>>sum[i];
    for(long long i=2;i<=n;i++)
        sum[i]+=(sum[i-1]);
    vector< vector<long long> > dp(k+1, vector<long long>(n+1));
    for(long long i=1;i<=k;i++)
    {
        for(long long j = i*m;j<=n;j++)
        {
            dp[i][j] = max(dp[i][j-1], dp[i-1][j-m]+psum(j,j-m+1));
        }
    }
    cout<<dp[k][n];
    return 0;
    
}

