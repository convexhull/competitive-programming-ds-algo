#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int dp(int l,int r)
{
	if(r==l+1)
		return 0;
	int mini=numeric_limits<int>::max();
	for(int i=l;i<=r-1;i++)
	{
		int cnt=dp(l,i)+dp(i,r)+v[l]*v[i]*v[r];
		mini=min(mini,cnt);
	}
	return mini;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	v.resize(n+1);
	for(int i=0;i<=n;i++)
		cin>>v[i];
	cout<<dp(0,n)<<endl;
	return 0;
}