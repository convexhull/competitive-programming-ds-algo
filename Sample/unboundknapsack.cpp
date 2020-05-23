#include<bits/stdc++.h>
using namespace std;
vector<int>wei;
vector<int>val;
int knapsack(int w)
{
	if(w<0)
		return 0;
	int l=wei.size();
	int maxi=0;
	for(int i=0;i<=l-1;i++)
	{
		int ans;
		w-wei[i] >=0 ? ans=knapsack(w-wei[i])+val[i] : ans=knapsack(w-wei[i]);
		maxi=max(maxi,ans);
	}
	return maxi;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,w;
	cin>>n>>w;
	wei.resize(n);
	val.resize(n);	
	for(int i=0;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		wei[i]=a;
		val[i]=b;
	}
	cout<<knapsack(w)<<endl;
	return 0;
}