#include<bits/stdc++.h>
using namespace std;
vector<int>wei;
vector<int>val;
int knapsack(int w, int i)
{
	if(w<0)
		return 0;
	if(i<0)
		return 0;
	int t= w-wei[i]<0 ? knapsack(w-wei[i],i-1) : knapsack(w-wei[i],i-1)+val[i];
	return max(t, knapsack(w,i-1));
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
	cout<<knapsack(w,n-1)<<endl;
	return 0;
}