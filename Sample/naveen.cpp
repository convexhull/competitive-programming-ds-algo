// can use cppcheck on terminal to debug run-time error
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define wit int T;cin>>T;while(T--)
#define mod 1000000007
struct srt
{
	ll a,b;
};
bool sort_by_a(const srt &lhs,const srt &rhs)
{
	return lhs.a>rhs.a;
}
int main()
{
	fast_io;
	ll i,j,k,n;
	srt s[600001];
	n=30000;
	for(i=0;i<2*n;i++)
	{
        s[i].a = 1+rand()%5000;
		s[i].b = i+1;
	}
	sort(s,s+2*n,sort_by_a);
	for(i=0;i<2*n;i+=2)
	{
		if(s[i].a != s[i+1].a)
			break;
	}
	if(i!=2*n)
		cout<<"-1\n";
	else
	{
		for(i=0;i<2*n;i+=2)
			cout<<s[i].b<<" "<<s[i+1].b<<endl;
	}
    return 0;
}
