#include<bits/stdc++.h>
using namespace std;
vector<bool>rep(20000000);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>arr(3);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(arr.begin(),arr.end());
    a=arr[0];
    b=arr[1];
    c=arr[2];
    vector<int>rem;
    int ans=0;
    for(int i=0;i<=n/b;i++)
    {
        for(int j=0;j<=n/c;j++)
        {
            rep[i*b+j*c]=true;
        }
    }
    for(int i=0;i<=n/a;i++)
    {
        if(rep[n-i*a])
        {
            rem.push_back(n-i*a);
        }
    }
    vector<bool>vis(10000);
    for(int i=0;i<=n/c;i++)
        vis[i*c]=true;
    int cnta = 0, cntb = 0, cntc = 0;
    for(auto x:rem)
    {
        int cb=0;
        for(int i=0;i<=x/b;i++)
        {
            if(vis[x-i*b])
                cb=i;
        }
        int t = x;
        t-=(cb*b);
        cnta = (n-x)/a;
        cntb = cb;
        cntc = t/c;
        ans = max(ans,cnta+cntb+cntc);
    }
    cout<<ans;
    return 0;
}
    
