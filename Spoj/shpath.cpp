#include<bits/stdc++.h>
using namespace std;
vector< vector<pair <int,int> >  >graph;
unordered_map<string,int>table;
vector<int> dijkstra(int source)
{
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
    vector<int>dist(10010,numeric_limits<int>::max());
    dist[source]=0;
    pq.push(make_pair(dist[source],source));
    while(!pq.empty())
    {
        pair<int,int>p=pq.top();
        int v=p.second;
        pq.pop();
        for(auto it=graph[v].begin();it!=graph[v].end();it++)
        {
            int vertex=it->first;
            if(dist[vertex] > dist[v] + it->second)
            {
                dist[vertex]=dist[v]+it->second;
                pq.push(make_pair(dist[vertex],vertex));
            }
        }
    }
    return dist;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        graph.resize(n+10);
        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            table[s]=i;
            int nei;
            cin>>nei;
            for(int j=1;j<=nei;j++)
            {
                int a,w;
                cin>>a>>w;
                graph[i].push_back(make_pair(a,w));
                graph[a].push_back(make_pair(i,w));
            }
        }
        int r;
        cin>>r;
        while(r--)
        {
            string a,b;
            cin>>a>>b;
            vector<int>dist=dijkstra(table[a]);
            cout<<dist[table[b]]<<endl;
        }
        graph.clear();
        table.clear();
    }
    return 0;
}
    
    






