#include<bits/stdc++.h>
using namespace std;
vector< vector<int> >graph(10000);
int bipartite(int s)
{
	queue<int>q;
	vector<int>color(10000,-1);
	vector<bool>vis(10000);
	q.push(s);
	vis[s]=true;
	color[s]=0;
	while(!q.empty())
	{
	int v=q.front();
	q.pop();
	int c;
	color[v]==0 ? c=1 : c=0;
	for(vector<int>::iterator it=graph[v].begin();it!=graph[v].end();it++)
	{
			cout<<"yo";
			//if(!vis[*it])
			{
				if(color[*it]==-1)
					color[*it]=c;
				else
				{
					if(color[*it]!=c)
					{
						return 0;
					}
				}
				q.push(*it);
				vis[*it]=true;			}
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
	int start;
	cin>>start;
	bipartite(start)==1 ? cout<<"Yes"<<endl : cout<<"No"<<endl;
	return 0;
}