#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int lcs(int m, int n)
{
	if(m<0 || n<0)
		return 0;
	if(s1[m]==s2[n])
		return 1+lcs(m-1,n-1);
	else
		return max(lcs(m-1,n),lcs(m,n-1));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>s1>>s2;
	cout<<lcs(s1.length()-1,s2.length()-1)<<endl;
	return 0;
}