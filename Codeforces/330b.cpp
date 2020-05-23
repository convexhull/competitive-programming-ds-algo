#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector< pair<int,int> > v(m);
    for(int i=0;i<m;i++)
        cin>>v[i].first>>v[i].second;
    vector<bool>vis(n+1);
    for(int i=0;i<m;i++)
        vis[v[i].first]=vis[v[i].second]=true;
    int node = 1;
    for(int i=1;i<=n;i++)
        if(!vis[i])
            node = i;
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++)
        if(i!=node)
            cout<<node<<" "<<i<<endl;
    return 0;  
    
}

