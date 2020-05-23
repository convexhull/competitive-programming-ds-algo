#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=0;i<=n-1;i++)
			cout<<2*i+1<<" ";
		cout<<endl;
	}
	return 0;
}