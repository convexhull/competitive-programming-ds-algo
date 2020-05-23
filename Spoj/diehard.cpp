#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > dp(3000,vector<int>(3000,-1));
int rec(int h, int a)
{
    int t=0;
    if(h<=0 || a<=0)
        return 0;
    else 
        t=1;
    h+=3;
    a+=2;
    if(dp[h][a]!=-1)
    	return 1+t+dp[h][a];
    int p=max(rec(h-5,a-10),rec(h-20,a+5));
    dp[h][a]=p;
    return 1+t+p;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int health,armor;
        cin>>health>>armor;
        cout<<rec(health,armor)-1<<'\n';
    }
    return 0;
}
