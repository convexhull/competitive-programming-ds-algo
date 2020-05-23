#include<bits/stdc++.h>
using namespace std;
long long nb,ns,nc,pb,ps,pc,rb,rs,rc,r;
long long predicate(long long x)
{
    return pb*max(0ll,rb*x-nb)+ps*max(0ll,rs*x-ns)+pc*max(0ll,rc*x-nc);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(long long i=0;s[i]>0;i++)
    {
        if(s[i]=='B')
            rb++;
        if(s[i]=='S')
            rs++;
        if(s[i]=='C')
            rc++;
    }
    long long lo = 0, hi = 1e13;
    while(lo<hi)
    {
        long long mid = lo+(hi-lo+1)/2;
        if(predicate(mid)<=r)
            lo = mid;
        else
            hi = mid-1;
    }
    cout<<hi;
    return 0;   
}

