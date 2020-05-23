#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)

    {

    int e,f;
    cin>>e>>f;
    int w=f-e;
    int n;
    cin>>n;
    vector<int>wei(n),val(n);
    for(int i=0;i<=n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        wei[i]=b;
        val[i]=a;
    }
    vector<int>dp(w+1);
    for(int i=1;i<=w;i++)
    {
        int mini=numeric_limits<int>::max();
        bool flag=false;
        for(int j=0;j<=n-1;j++)
        {
            if(i-wei[j]>=0 && dp[i-wei[j]] >=0)
            {
                int cnt=dp[i-wei[j]]+val[j];
                mini=min(mini,cnt);
                flag=true;
            }
        }
        if(flag==false)
            dp[i]=-1;
        else
            dp[i]=mini;
    }
    if(dp[w]==-1)
    	cout<<"This is impossible."<<endl;
    else
    	cout<<"The minimum amount of money in the piggy-bank is "<<dp[w]<<'.'<<endl;
}
    return 0;
}
            

