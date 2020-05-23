#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<=n-1;i++)
		cin>>v[i];
	for(int i=1;i<=n-1;i++)
	{
		v[i]=max(v[i],v[i-1]+v[i]);
	}
	cout<<*max_element(v.begin(),v.end())<<endl;
	return 0;
}