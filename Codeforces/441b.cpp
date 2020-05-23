#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,v;
    cin>>n>>v;
    long long prev_q = 0;
    vector< pair<long long,long long> > a(n);
    for(long long i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;
    vector<long long>opv(3010);
    for(long long i=0;i<n;i++)
        opv[a[i].first]+=(a[i].second);
    long long ans = 0;
    long long sz = opv.size();
    long long mx = max_element(a.begin(),a.end())->first;
    for(long long i=0;i<=mx;i++)
    {
        if(v<prev_q)
        {
            ans+=v;
            prev_q =opv[i];
        }
        else
        {
            ans += prev_q;
            long long rem = v-prev_q;
            prev_q = 0;
            ans += min(rem,opv[i]);
            prev_q += max(0ll,opv[i]-rem);
        }
    }
    if(prev_q)
    {
        ans += min(v,prev_q);
    }
    cout<<ans;
    return 0;
}

