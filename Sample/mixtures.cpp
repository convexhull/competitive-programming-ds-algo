#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin>>n)
        {
        vector<int>v(n);
        for(int i=0;i<=n-1;i++)
            cin>>v[i];
        vector<int>sum(n+1);
        sum[0]=0;
        for(int i=1;i<=n;i++)
            sum[i]=sum[i-1]+v[i-1];
        vector< vector<int> > dp(n,vector<int>(n));
        for(int i=2;i<=n;i++)
        {
            for(int j=0,k=i-1;k<=n-1;j++,k++)
            {
                int mini=numeric_limits<int>::max();
                for(int l=j;l<=k-1;l++)
                {
                    int cnt=dp[j][l]+dp[l+1][k]+((sum[l+1]-sum[j])%100)*((sum[k+1]-sum[l+1])%100);
                    mini=min(mini,cnt);
                }
                dp[j][k]=mini;
            }
        }
    cout<<dp[0][n-1]<<endl;
}
    return 0;
}
