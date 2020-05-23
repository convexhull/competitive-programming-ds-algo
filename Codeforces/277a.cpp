#include<bits/stdc++.h>
using namespace std;
vector< bool > vis;
void dfs(vector< vector<int> > &graph, int source)
{
    stack<int>s;
    vis[source]=true;
    s.push(source);
    while(!s.empty())
    {
        int v = s.top();
        s.pop();
        for(auto it = graph[v].begin();it!=graph[v].end();it++)
        {
            if(!vis[*it])
            {
                s.push(*it);
                vis[*it]=true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    int cnt = 0;
    cin>>n>>m;
    vector< vector<int> > graph(n+1);
    vector< vector<int> > table(m+1);
    vis.resize(n+1);
    bool flag = true;
    for(int i=1;i<=n;i++)
    {
        int num;
        cin>>num;
        if(num!=0)
            flag = false;
        for(int j=1;j<=num;j++)
        {
            int lang;
            cin>>lang;
            table[lang].push_back(i);
        }
    }
    for(int i=1;i<=m;i++)
    {
        int l = table[i].size();
        for(int j = 1;j<l; j++)
        {
            int x = table[i][0];
            int y = table[i][j];
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(graph,i);
            cnt++;
        }
    }
    if(flag)
        cnt++;
    cout<<cnt-1<<endl;
    return 0;    
}

