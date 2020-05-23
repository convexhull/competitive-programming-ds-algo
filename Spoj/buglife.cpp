	#include<bits/stdc++.h>
	using namespace std;
	vector< vector<int> > graph(2010);
	vector<bool>done(2010);
	int bipartite(int st)
	{
		queue<int>q;
		vector<bool>vis(2010);
		vector<int>color(2010,-1);
		color[st]=0;
		q.push(st);
		vis[st]=true;
		int c;
		while(!q.empty())
		{
			int v=q.front();
			q.pop();
			c=1-color[v];
			for(vector<int>::iterator it=graph[v].begin();it!=graph[v].end();it++)
			{
				if(!vis[*it])
				{
					q.push(*it);
					color[*it]=c;
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
		int T;
		cin>>T;
		static int cnt=0;
		while(T--)
		{
			cnt++;
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
					flag=bipartite(i);
					done[i]=true;
				}
				if(!flag)
				{
					cout<<"Scenario #"<<cnt<<':'<<'\n'<<"Suspicious bugs found!"<<endl;
					goto sos;
				}
			}
			cout<<"Scenario #"<<cnt<<':'<<'\n'<<"No suspicious bugs found!"<<endl;
			sos:
			for(int i=0;i<=2009;i++)
				done[i]=false;
			for(int i=0;i<=2009;i++)
				graph[i].clear();
		}
		return 0;
	}