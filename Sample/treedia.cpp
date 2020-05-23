#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > graph(100000);
vector< bool > vis(100000);
vector< int > lev(100000);
void bfs(int st)
{
	lev[st]=0;
	queue<int>q;
	q.push(st);
	vis[st]=true;
	while(!q.empty())
	{
		int f=q.front();
		q.pop();
		for(vector<int>::iterator it=graph[f].begin();it!=graph[f].end();it++)
		{
			if(!vis[*it])
			{
				q.push(*it);
				vis[*it]=true;
				lev[*it]=lev[f]+1;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int nodes,edges;
	cin>>nodes>>edges;
	for(int i=1;i<=edges;i++)
	{
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	int start;
	cin>>start;
	bfs(start);
	for(int i=1;i<=nodes;i++)
		cout<<lev[i]<<" ";
	return 0;
}