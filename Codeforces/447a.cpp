#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int p,n;
	cin>>p>>n;
	vector<int>bucket(p);
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(bucket[x%p])
		{
			cout<<i<<endl;
			return 0;
		}
		else
		{
			bucket[x%p] = 1;
		}
	}
	cout<<-1<<endl;
	return 0;
}