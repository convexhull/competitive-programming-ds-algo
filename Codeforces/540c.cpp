#include<bits/stdc++.h>
using namespace std;
bool dfs(vector< vector<char> > &graph,int n, int m, int r1,int c1, int r2, int c2)
{
    vector< vector<bool> > vis(n+2,vector<bool>(m+2));
    bool flag = false;
    stack< pair<int,int> > s;
    s.push(make_pair(r1,c1));
    vis[r1][c1] = true;
    pair<int,int> penul=make_pair(r1,c1);
    while(!s.empty())
    {
        pair<int,int> v = s.top();
        if(v.first==r2 && v.second==c2)
        {
            flag = true;
            break;
        }
        s.pop();
        vector<int>para{1,-1};
        for(auto x:para)
        {
            if( !vis[v.first][v.second+x] && (graph[v.first][v.second+x]=='.' || v.first==r2 && v.second+x == c2 ))
            {
                vis[v.first][v.second+x]=true;
                s.push(make_pair(v.first,v.second+x));
                if(v.first==r2 && v.second+x==c2)
                    penul = v;
            }
            if( !vis[v.first+x][v.second] && (graph[v.first+x][v.second]=='.' || v.first+x ==r2 && v.second == c2))
            {
                vis[v.first+x][v.second]=true;
                s.push(make_pair(v.first+x,v.second));
                if(v.first+x==r2 && v.second ==c2)
                    penul = v;
            }
        }
    }
    if(flag)
    {
        bool f = false;
        if(graph[r2][c2]=='X')
        {
            return true;
        }
        vector<int>para{1,-1};
        for(auto x:para)
        {
            if(graph[r2][c2+x]=='.' && (r2!=penul.first || c2+x !=penul.second))
                f = true;
            if(graph[r2+x][c2]=='.' && (r2+x!=penul.first || c2!=penul.second ))
                f = true;
        }
        return f;
    }
    return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m,r1,c1,r2,c2;
    cin>>n>>m;
    vector< vector<char> > graph(n+2,vector<char>(m+2,'#'));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>graph[i][j];
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2 && c1==c2)
    {
        int ans = 0;
        vector<int>para{1,-1};
        for(auto x:para)
        {
            if(graph[r1][c1+x]=='.')
                ans++;
            if(graph[r1+x][c1]=='.')
                ans++;
        }
        if(graph[r1][c1]=='X' && ans>0)
            cout<<"YES"<<endl;
        else if(graph[r1][c1]=='.' && ans>1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        dfs(graph,n,m,r1,c1,r2,c2) ? cout<<"YES" : cout<<"NO";
	return 0;
}
