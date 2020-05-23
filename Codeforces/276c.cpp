#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,q;
    cin>>n>>q;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    vector<long long>chg(n);
    for(long long i=1;i<=q;i++)
    {
        long long l,r;
        cin>>l>>r;
        l--;r--;
        chg[l]++;
        if(r<n-1)
            chg[r+1]-=1;
    }
    vector<long long>psum(n);
    for(long long i=0;i<n;i++)
        i==0 ? psum[i]=chg[i] : psum[i]=psum[i-1]+chg[i] ;
    sort(v.rbegin(),v.rend());
    vector<long long>ans(n);
    priority_queue< pair<long long,long long> > pq;
    for(long long i=0;i<n;i++)
        pq.push(make_pair(psum[i],i));
    long long i = 0;
    while(!pq.empty())
    {
        pair<long long,long long>p = pq.top();
        pq.pop();
        ans[p.second]=v[i++];
    }
    long long res = 0;
    for(long long i=0;i<n;i++)
        res += (psum[i]*ans[i]);
    cout<<res;
    return 0;

}

