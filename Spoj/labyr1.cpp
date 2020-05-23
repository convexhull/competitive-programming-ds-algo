#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >  bfs(vector<vector<char> > &graph, pair<int,int> &source)
{
    int row=graph.size();
    int col=graph[0].size();
    vector<vector<int> > dist(row+2,vector<int>(col+2,numeric_limits<int>::max()));
    queue< pair<int,int> > q;
    vector< vector<int> > vis(row+2,vector<int>(col+2));
    dist[source.first][source.second]=0;
    q.push(source);
    vis[source.first][source.second]=1;
    while(!q.empty())
    {
        pair<int,int> e=q.front();
        q.pop();
        for(int x=e.first-1;x<=e.first+1;x++)
            if(graph[x][e.second]=='.' && !vis[x][e.second])
            {
                dist[x][e.second]=dist[e.first][e.second]+1;
                q.push(make_pair(x,e.second));
                vis[x][e.second]=1;
            }
        for(int y=e.second-1;y<=e.second+1;y++)
            if(graph[e.first][y]=='.' && !vis[e.first][y])
            {
                dist[e.first][y]=dist[e.first][e.second]+1;
                q.push(make_pair(e.first,y));
                vis[e.first][y]=1;
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
        int row,col;
        cin>>col>>row;
        pair<int,int> source=make_pair(-1,-1);
        vector<vector<char> > graph(row+2,vector<char>(col+2));
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                cin>>graph[i][j];
                if(graph[i][j]=='.')
                    source=make_pair(i,j);
            }
        }
        if(source==make_pair(-1,-1))
        {
            cout<<0<<endl;
            continue;
        }
        pair<int,int> vertex;
        vector<vector<int> > dfir=bfs(graph,source);
        int max_till=0;
        for(int i=1;i<=row;i++)
            for(int j=1;j<=col;j++)
            {
                if(dfir[i][j]!=numeric_limits<int>::max() && dfir[i][j]>=max_till)
                {
                	vertex=make_pair(i,j);
                	max_till=dfir[i][j];
                }
            }
        vector< vector<int> > dsec=bfs(graph,vertex);
        max_till=0;
        for(int i=1;i<=row;i++)
            for(int j=1;j<=col;j++)
            {
                if(dsec[i][j]!=numeric_limits<int>::max())
                    max_till=max(max_till,dsec[i][j]);
            }
        cout<<"Maximum rope length is "<<max_till<<'.'<<endl;
    }
    return 0;
}



