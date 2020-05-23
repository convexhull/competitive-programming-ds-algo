#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	v.resize(n);
	for(int i=0;i<=n-1;i++)
		cin>>v[i];
	build(1,0,n-1);
	int q;
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int l,r,v;
		cin>>l>>r>>v;
		update(1,0,n-1,l,r);
		
	}
}