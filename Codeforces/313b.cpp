#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	int l = s.length();
	vector<int>pfxsm(l);
	for(int i = 1 ;s[i]>0;i++)
		pfxsm[i] = pfxsm[i-1] + (s[i]==s[i-1]);
	int Q;
	cin>>Q;
	while(Q--)
	{
		int l,r;
		cin>>l>>r;
		l--;r--;
		if(!l)
			cout<<pfxsm[r]<<endl;
		else
			cout<<pfxsm[r]-pfxsm[l-1]-(s[l]==s[l-1])<<endl;
	}
	return 0;
}

