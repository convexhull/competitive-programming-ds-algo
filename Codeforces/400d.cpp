#include<bits/stdc++.h>
using namespace std;
vector< vector<long long> > graph(100010);
vector< vector<long long> > dp(503,vector<long long>(503,1e15));
vector<long long>virgin;
vector<long long>type(1e5+10);
vector<long long> c (503);
bool dfs(long long src)
{
    vector<bool>vis(1e5+10);
    long long cnt = 1;
    stack<long long>s;
    vis[src]=true;
    s.push(src);
    while(!s.empty())
    {
        long long v = s.top();
        s.pop();
        for(vector<long long>::iterator it = graph[v].begin();it!=graph[v].end();it++)
        {
            if(!vis[*it])
            {
                if(type[*it]==type[src])
                    cnt++;
                vis[*it]=true;
                s.push(*it);
            }
        }
    }
    if(cnt==c[type[src]])
        return true;
    return false;    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,m,k;
    cin>>n>>m>>k;
    for(long long i=1;i<=k;i++)
        cin>>c[i];
    long long par = 0;
    for(long long i=1;i<=k;i++)
    {
        for(long long j=1;j<=c[i];j++)
        {
            type[j+par] = i;
        }
        par+=c[i];
    }
    for(long long i=1;i<=n;i++)
        if(type[i]!=type[i-1])
            virgin.push_back(i);
    for(long long i=1;i<=m;i++)
    {
        long long u,v,x;
        cin>>u>>v>>x;
        if(!x)
        {
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        dp[type[u]][type[v]] = min(x,dp[type[u]][type[v]] );
        dp[type[v]][type[u]] = min(x,dp[type[v]][type[u]] );
    }
    bool flag = true;
    for(long long i=0;i<k;i++)
    {
        flag &= dfs(virgin[i]);
    }
    if(!flag)
        cout<<"No";
    else
    {
        cout<<"Yes"<<endl;
        for(long long i=1;i<=k;i++)
            for(long long j=1;j<=k;j++)
                if(i==j)
                    dp[i][j]=0;
        for(long long l=1;l<=k;l++)
            for(long long i=1;i<=k;i++)
                for(long long j=1;j<=k;j++)
                    dp[i][j] = min(dp[i][j],dp[i][l]+dp[l][j]);
        for(long long i=1;i<=k;i++)
        {
            for(long long j=1;j<=k;j++)
            {
                if(dp[i][j]==1e15)
                    cout<<-1<<" ";
                else
                    cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

