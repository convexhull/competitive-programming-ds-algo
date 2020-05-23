#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long l,r,x,y,k;
	cin>>l>>r>>x>>y>>k;
	long long ans = 0;
	for(long long i=x;i<=y;i++)
	{
		long long exp = k*i;
		if(exp >=l && exp <=r)
			ans = 1;
	}
	ans ? cout<<"YES" : cout<<"NO";
	return 0;
}