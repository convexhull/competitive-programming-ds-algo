#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    vector<long long>cln = v;
    sort(cln.begin(),cln.end());
    long long t = 1;
    long long ans = 0;
    for(long long i=0;i<n;i++)
    {
        ans+=(abs(cln[i]-t));
        t++;
    }
    cout<<ans;
    return 0;

}

