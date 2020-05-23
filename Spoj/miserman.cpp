#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector< vector<int> > fare(n,vector<int>(m));
    for(int i=0;i<=n-1;i++)
        for(int j=0;j<=m-1;j++)
            cin>>fare[i][j];
    vector< vector<int> >dp(n,vector<int>(m));
    for(int i=0;i<=m-1;i++)
        dp[0][i]=fare[0][i];
    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            if(j==0)
                dp[i][j]=fare[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
            else
                if(j==m-1)
                    dp[i][j]=fare[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
                else
                    dp[i][j]=fare[i][j]+min(min(dp[i-1][j-1],dp[i-1][j+1]),dp[i-1][j]);
        }
    }
    cout<<*min_element(dp[n-1].begin(),dp[n-1].end())<<endl;
    return 0;
}
