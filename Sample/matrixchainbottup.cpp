//Matrix Chain Bottomup dynamic programming
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector< pair<int,int> > v;
	for(int i=0;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	vector< vector<int > > dp(n,vector<int>(n));
	for(int l=2;l<=n;l++)
	{
		for(int i=0,j=l-1;j<=n-1;i++,j++)
		{
			int mini=numeric_limits<int>::max();
			for(int k=i;k<=j-1;k++)
			{
				int cnt=dp[i][k]+dp[k+1][j]+v[i].first*v[k+1].first*v[j].second;
				mini=min(mini,cnt);
			}
			dp[i][j]=mini;
		}
	}
	cout<<dp[0][n-1]<<endl;
	return 0;
}