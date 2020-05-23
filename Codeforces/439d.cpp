#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,m;
    cin>>n>>m;
    vector<long long>a(n),b(m);
    for(long long i=0;i<n;i++)
        cin>>a[i];
    for(long long i=0;i<m;i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    long long it = 0,ans = 0;
    while(it<min(m,n) && a[it]<b[it])
    {
        ans+=(b[it]-a[it]);
        it++;
    }
    cout<<ans<<endl;
    return 0;
}
