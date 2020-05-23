#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,e;
    cin>>n>>e;
    vector< vector< pair<int,int> > > graph(n+1);
    for(int i=1;i<=e;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a].push_back(make_pair(b,w));
    }
    vector<int>dist(n+1,numeric_limits<int>::max());
    int source;
    cin>>source;
    dist[source]=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<graph[i].size();j++)
        {
            if(dist[graph[i][j].first]>dist[i]+graph[i][j].second)
                dist[graph[i][j]]:x


