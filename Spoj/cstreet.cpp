#include<bits/stdc++.h>
using namespace std;
vector<int>parent,rnk;
bool comp(pair< pair<int,int>,int > p1, pair< pair<int,int>,int > p2)
{
    return p1.second<p2.second;
}
int find_set(int x)
{
    if(x!=parent[x])
        parent[x]=find_set(parent[x]);
    return parent[x];
}
int union_set(int x,int y)
{
    int rep_x=find_set(x);
    int rep_y=find_set(y);
    if(rep_x==rep_y)
        return 0;
    if(rnk[rep_x]>rnk[rep_y])
        parent[rep_y]=rep_x;
    else
        parent[rep_x]=rep_y;
    if(rnk[rep_x]==rnk[rep_y])
        rnk[rep_y]++;
    return 1;
}
int kruskal(vector<pair< pair<int,int>,int > > &graph,int nodes,int edges)
{
    int ans=0;
    parent.resize(nodes+1);
    rnk.resize(nodes+1);
    for(int i=1;i<=nodes;i++)
        parent[i]=i;
    for(int i=0;i<edges;i++)
    {
        if(union_set(graph[i].first.first,graph[i].first.second))
            ans+=graph[i].second;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int price,nodes,edges;
        cin>>price>>nodes>>edges;
        vector< pair< pair<int,int>,int> >graph;
        for(int i=1;i<=edges;i++)
        {
            int a,b,w;
            cin>>a>>b>>w;
            graph.push_back(make_pair(make_pair(a,b),w));
        }
        sort(graph.begin(),graph.end(),comp);
        cout<<price*kruskal(graph,nodes,edges)<<endl;
    }
    return 0;
}
