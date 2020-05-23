#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > graph(10000);
vector<int>done(10000);
int bfs(int start)
{
	vector<int>color(10000,-1);
	vector<bool>vis(10000);
	queue<int>q;
	q.push(start);
	vis[start]=1;
	color[start]=0;
	while(!q.empty())
	{
		int v=q.front();
		q.pop();
		int c;
		color[v]==0 ? c=1 : c=0;
		for(vector<int>::iterator it=graph[v].begin();it!=graph[v].end();it++)
		{
			if(!vis[*it])
			{
				color[*it]=c;
				q.push(*it);
				vis[*it]=true;
			}
			else
			{
				if(color[*it]!=c)
					return 0;
			}
		}
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,e;
	cin>>n>>e;
	for(int i=1;i<=e;i++)
	{
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	int flag=1;
	for(int i=1;i<=n;i++)
	{
		if(!done[i])
		{
			flag = bfs(i);
			done[i]=1;
		}
		if(flag==0)
		{
			cout<<"Not Bipartite"<<endl;
			return 0;
		}
	}
	cout<<"Bipartite"<<endl;
	return 0;
}