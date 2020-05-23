#include<bits/stdc++.h>
using namespace std;
vector< vector<long long> > graph(100010);
vector< vector<long long> > dp(1001,vector<long long>(1001,1e15));
vector<long long> type(100010);
vector<long long>virgin;
vector<long long>vis(100010);
long long cnt = 0;
void dfs(long long src,long long cons)
{
    bool flag = true;
    vis[src] = true;
    if(type[src]==type[cons])
        cnt++;
    for(auto it = graph[src].begin();it!=graph[src].end();it++)
    {
        if(!vis[*it])
            dfs(*it,cons);
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long>c(k+1);
    for(long long i=1;i<=k;i++)
        cin>>c[i];
    long long para = 0;
    for(long long i=1;i<=k;i++)
    {
        for(long long j=1;j<=c[i];j++)
        {
            type[j+para] = i;
        }
        para+=c[i];
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
        dp[type[u]][type[v]] = min(x,dp[type[u]][type[v]]);
        dp[type[v]][type[u]] = min(x,dp[type[v]][type[u]]);
    }
    bool flag = true;
    for(long long i=0;i<k;i++)
    {
        dfs(virgin[i],virgin[i]);
        if(cnt!=c[type[virgin[i]]])
            flag = false;
        cnt = 0;
        for(long long i=0;i<100010;i++)
            vis[i]= false;
    }
    if(!flag)
        cout<<"No"<<endl;
    else
    {
        cout<<"Yes"<<endl;
        for(long long l=1;l<=k;l++)
            for(long long i=1;i<=k;i++)
                for(long long j=1;j<=k;j++)
                    dp[i][j] = (i==j) ? 0 : min(dp[i][j],dp[i][l]+dp[l][j]);
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
    


        

    
	

