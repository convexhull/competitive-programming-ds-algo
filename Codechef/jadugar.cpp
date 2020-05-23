#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k,a,b;
    cin>>n>>k>>a>>b;
    long long Q;
    cin>>Q;
    vector<long long>dp(n+1);
    dp[1]=k;
    for(long long i=2;i<=n;i++)
    {
        dp[i] = (dp[i] + (a*dp[i-1])%M)%M;
        long long ans = 0;
        for(long long j=1;j<=i-1;j++)
            ans = (ans + (dp[j] * dp[i-j])%M)%M;
        dp[i] = (dp[i] + (b*ans)%M)%M;
    }
    vector<long long>sq(n+1);
    for(long long i=1;i<=n;i++)
        sq[i] = (dp[i]*dp[i])%M;
    vector< long long > psum(n+1);
    psum[1]=sq[1];
    for(long long i=2;i<=n;i++)
        psum[i] = (psum[i-1]+sq[i])%M;
    while(Q--)
    {
        long long l,r;
        cin>>l>>r;
        long long ans = (psum[r]-psum[l-1])%M;
        if(ans<0)
            cout<<ans+M<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;    
}

