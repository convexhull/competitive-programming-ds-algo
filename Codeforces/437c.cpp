#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector< pair<int,int> > v(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin>>v[i].first;
        v[i].second = i;
    }
    vector< pair<int,int> > cpy = v;
    sort(v.begin(),v.end());
    vector< vector<int> > graph(n+1,vector<int>(n+1));
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    int ans = 0;
    for(int i=n;i>=1;i--)
    {
        int curr_node = v[i].second;
        for(int j=1;j<=n;j++)
        {
            if(graph[curr_node][j])
            {
                ans += (cpy[j].first);
                graph[j][curr_node] = 0;
            }
        }
    }
    cout<<ans;
    return 0;
}
