#include<bits/stdc++.h>
using namespace std;
vector<int> cost,fun;
int dp(int w,int i)
{
	if()
	return max(dp(w-cost[i],i-1)+fun[i],dp(w,i-1));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int w,n;
	cin>>w>>n;
	while(1)
	{
		if(w==0 && n==0)
			break;
		cost.resize(n);
		fun.resize(n);
		for(int i=0;i<=n-1;i++)
			cin>>cost[i];
		for(int i=0;i<=n-1;i++)
			cin>>fun[i];
		cout<<dp(w,n-1)<<endl;
	}
	return 0;
}