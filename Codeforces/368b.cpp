#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int>pos(n),xos(m);
    for(int i=0;i<m;i++)
    {
        cin>>xos[i];
        xos[i]--;
    }
    vector<bool>vis(100001);
    pos[n-1]=1;
    vis[v[n-1]]=true;
    for(int i=n-2;i>=0;i--)
    {
        pos[i]= vis[v[i]] ? pos[i+1] : pos[i+1]+1;
        vis[v[i]]=true;
    }
    for(auto x:xos)
        cout<<pos[x]<<'\n';
    return 0;
}

