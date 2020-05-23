#include<bits/stdc++.h>
using namespace std;
vector<int>cumfac;
void update(int l,int r,int x)
{
    int n = cumfac.size();
    cumfac[l]+=x;
    if(r!=n-1)
        cumfac[r+1]-=x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cumfac.resize(n);
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        update(l,r,x);
    }
    for(int i=1;i<n;i++)
        cumfac[i]+=cumfac[i-1];
    for(int i=0;i<n;i++)
        cumfac[i]+=v[i];
    for(auto x:cumfac)
        cout<<x<<" ";
    return 0;
}

