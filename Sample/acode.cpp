#include<bits/stdc++.h>
using namespace std;
int acode(string &s,int idx)
{
	if(idx<=0)
		return 1;
	if(s[idx]=='0')
		return acode(s,idx-1);
	if((s[idx-1]-'0')*10+(s[idx]-'0')<=26 && (s[idx-1]-'0')*10+(s[idx]-'0')>9)
		return acode(s,idx-2)+acode(s,idx-1);
	return acode(s,idx-1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while(1)
	{
		cin>>s;
		if(s[0]=='0')
			break;
		cout<<acode(s,s.length()-1)<<endl;
	}
	return 0;
}