#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    long long ans=-1e9;
    for(long long i=1;i<=n;i++)
    {
        long long x,y;
        cin>>x>>y;
        long long t= y>k ? x-(y-k) : x;
        ans=max(ans,t);
    }
    cout<<ans;
    return 0;
}
