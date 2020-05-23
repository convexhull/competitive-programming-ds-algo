#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	unsigned long long T;
	cin>>T;
	while(T--)
	{
		unsigned long long u,v;
		cin>>u>>v;
		cout<<((u+v)*(u+v+1))/2+u+1<<endl;
	}
	return 0;
}