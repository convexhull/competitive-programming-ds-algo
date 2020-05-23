#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int v1,v2,v3,vm;
	cin>>v1>>v2>>v3>>vm;
	if(vm > 2*v1 || vm >2*v2 || vm>2*v3)
		cout<<-1<<endl;
	else
	{
		cout<<2*v1<<endl;
		cout<<2*v2<<endl;
		cout<<min(2*v3,2*vm)<<endl;
	}


	return 0;
}