#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<long long>v(n);
	for(long long i=0;i<=n-1;i++)
		cin>>v[i];
	if(n==1||n==2)
		cout<<0<<endl;
    else
    {
	    long long ans=n-2;
	    sort(v.begin(),v.end());
	    for(long long i=1;i<n-3;i++)
	    {
		    if(v[i]==v[0]||v[i]==v[n-1])
			ans--;
    	}
	    cout<<ans<<endl;
    }
	return 0;
}
