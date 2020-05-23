#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
		int a,b;
		cin>>a>>b;
		int hcf=gcd(a,b);
		cout<<b/hcf<<" "<<a/hcf<<endl;
	}
	return 0;
}