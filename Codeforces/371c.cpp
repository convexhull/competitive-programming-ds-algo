#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    long long nb,ns,nc,pb,ps,pc,rb=0,rs=0,rc=0,r,ans = 0;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
        for(long long i=0;s[i]>0;i++)
        if(s[i]=='B')
            rb++;
    else if(s[i]=='S')
        rs++;
        else  rc++;
    long long stepcost = rb*pb+rs*ps+rc*pc;
    while(nb&&rb || ns&&rs || nc&&rc)
    {
        if(1)
        {
            if(nb-rb<0)
            {
                long long diff = rb-nb;
                long long cost = pb*(rb-nb);
                if(r<cost)
                    break;
                r-=cost;
                nb += (rb-nb);
            }
        }
        nb-=rb;
        if(1)
        {
            if(ns-rs<0)
            {
                long long diff = rs-ns;
                long long cost =ps*(rs-ns);
                if(r<cost)
                    break;
                r-=cost;
                ns +=(rs-ns);
            }
            ns-=rs;
        }
        if(1)
        {
            if(nc-rc<0)
            {
                long long diff = rc-nc;
                long long cost = pc*(rc-nc);
                if(r<cost)
                    break;
                r-=cost;
                nc +=(rc-nc);
            }
        }
        nc-=rc;
        ans++;
    }
    ans+=(r/stepcost);
    cout<<ans;
    return 0;         
}

