#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1);
    vector<bool>vis(n+1);
    vector<int>col(n+1);
    for(int i=1;i<=m;i++)
    {
        int f,s,t;
        cin>>f>>s>>t;
        if(!(vis[f]||vis[s]||vis[t]))
        {
            col[f]=1;
            col[s]=2;
            col[t]=3;
            vis[f]=vis[s]=vis[t]=true;
        }
        else
        {
            if(vis[f])
            {
                col[s] = (col[f])%3+1;
                col[t] = (col[f]+1)%3+1;
                vis[s]=vis[t]=true;
            }
            else if(vis[s])
            {
                col[t]= (col[s])%3+1;
                col[f] = (col[s]+1)%3+1;
                vis[f]=vis[t]=true;
            }
            else if(vis[t])
            {
                col[f]=(col[t])%3+1;
                col[s]=(col[t]+1)%3+1;
                vis[f]=vis[s]=true;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<col[i]<<" ";
    return 0;      
    
}

