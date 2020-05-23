#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long r;
    while(1)
    {
        static long long cnt=0;
        cnt++;
        cin>>r;
        if(!r)
            break;
        vector< vector<long long> > trigraph(r,vector<long long>(3));
        for(long long i=0;i<=r-1;i++)
        {
            for(long long j=0;j<=2;j++)
            {
                cin>>trigraph[i][j];
            }
        }
        vector< vector<long long> >dp(r,vector<long long>(3));
        for(long long i=0;i<=1;i++)
            dp[0][i]=trigraph[0][i];
        dp[0][2]=trigraph[0][2]+dp[0][1];
        dp[1][0]=trigraph[1][0]+dp[0][1];
        dp[1][1]=min(min(dp[1][0],dp[0][1]),dp[0][2])+trigraph[1][1];
        dp[1][2]=trigraph[1][2]+min(min(dp[1][1],dp[0][1]),dp[0][2]);
        for(long long i=2;i<=r-1;i++)
        {
            for(long long j=0;j<=2;j++)
            {
                dp[i][j]=trigraph[i][j]+(j==0 ? min(dp[i-1][j],dp[i-1][j+1]) : ( j==1 ? min(min(min(dp[i][j-1],dp[i-1][j-1]),dp[i-1][j]),dp[i-1][j+1]) : min(min(dp[i][j-1],dp[i-1][j-1]),dp[i-1][j])));
            }
        }
        /*for(long long i=0;i<=r-1;i++)
        {
            for(long long j=0;j<=2;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/
        cout<<cnt<<". "<<dp[r-1][1]<<endl;
    }
    return 0;
}
