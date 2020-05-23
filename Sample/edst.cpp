#include<bits/stdc++.h>
using namespace std;
vector< vector<int> >cache(100,vector<int>(100,-1));
string s1,s2;
int edst(int m,int n)
{
	if(m<0)
		return n+1;
	if(n<0)
		return m+1;

	if(s1[m]==s2[n])
	{
		return edst(m-1,n-1);
	}	
	else
		return 1+min(min(edst(m-1,n-1),edst(m-1,n)),edst(m,n-1));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>s1>>s2;
	cout<<edst(s1.length()-1,s2.length()-1)<<endl;
	return 0;
}