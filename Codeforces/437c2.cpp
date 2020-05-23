#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,m;
    cin>>n>>m;
    vector< long long> v(n+1);
    for(long long i=1;i<=n;i++)
        cin>>v[i];
    vector< pair<long long,long long> > val(m);
    for(long long i=0;i<m;i++)
        cin>>val[i].first>>val[i].second;
    long long ans = 0;
    for(auto x:val)
        ans +=(min(v[x.first],v[x.second]));
    cout<<ans;
    return 0;
    
}

