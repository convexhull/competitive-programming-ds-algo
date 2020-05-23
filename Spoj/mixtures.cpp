#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(scanf("%d",&n)>0)
    {
        vector<int>v(n);
        for(int i=0;i<=n-1;i++)
            cin>>v[i];
        vector<int>sumtill(n+1);
        sumtill[0]=0;
        for(int i=1;i<=n;i++)
            sumtill[i]=sumtill[i-1]+v[i-1];
        vector< vector<int> > dp(n,vector<int>(n));
        for(int l=2;l<=n;l++)
        {
            for(int i=0,j=l-1;j<=n-1;i++,j++)
            {
                int mini=numeric_limits<int>::max();
                for(int k=i;k<=j-1;k++)
                {
                    int cnt = dp[i][k]+dp[k+1][j]+((sumtill[k+1]-sumtill[i])%100 * (sumtill[j+1]-sumtill[k+1]%100));   
                    mini=min(mini,cnt);
                }
                dp[i][j]=mini;
            }
        }
        cout<<dp[0][n-1]<<endl;
    }
    return 0;
}

                    
