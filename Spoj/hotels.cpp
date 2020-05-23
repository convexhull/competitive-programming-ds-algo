#include<bits/stdc++.h>
using namespace std;
long long func(vector<long long> &v, long long n, long long m)
{
	long long l=0;
	long long r=0;
	long long sum=0;
	long long ans=0;
	while(l<n)
	{
		while(r<n && sum+v[r]<=m)
		{
			sum+=v[r];
			r++;
		}
		ans=max(ans,sum);
		sum-=v[l];
		l++;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long n,m;
	cin>>n>>m;
	vector<long long>v(n);
	for(long long i=0;i<=n-1;i++)
		cin>>v[i];
	cout<<func(v,n,m);
	return 0;
}