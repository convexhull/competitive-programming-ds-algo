#include<bits/stdc++.h>
using namespace std;
vector< vector<int> >dist(200, vector<int> (200,numeric_limits<int>::max()));
vector< pair<int,int> > ones;
void bfs( pair<int,int> &p, int n, int m)
{
	queue< pair<int,int> > q;
	q.push(p);
	while(!q.empty())
	{
		pair<int,int> top=q.front();
		q.pop();
		if(top.first-1 >=0 && dist[top.first][top.second]+1<dist[top.first-1][top.second])
		{
			dist[top.first-1][top.second]=dist[top.first][top.second]+1;
			q.push(make_pair(top.first-1,top.second));
		}
		if(top.first+1 <=n-1 && dist[top.first][top.second]+1<dist[top.first+1][top.second])
		{
			dist[top.first+1][top.second]=dist[top.first][top.second]+1;
			q.push(make_pair(top.first+1,top.second));
		}
		if(top.second-1>=0 && dist[top.first][top.second]+1 < dist[top.first][top.second-1])
		{
			dist[top.first][top.second-1]=dist[top.first][top.second]+1;
			q.push(make_pair(top.first,top.second-1));
		}
		if(top.second+1<=m-1 && dist[top.first][top.second]+1<dist[top.first][top.second+1])
		{
			dist[top.first][top.second+1]=dist[top.first][top.second]+1;
			q.push(make_pair(top.first,top.second+1));
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		vector<string>bitmap(n);
		for(int i=0;i<=n-1;i++)
		{
			string s;
			cin>>s;
			bitmap[i]=s;
		}
		for(int i=0;i<=n-1;i++)
		{
			for(int j=0;j<=m-1;j++)
			{
				if(bitmap[i][j]=='1')
				{
					dist[i][j]=0;
					ones.push_back(make_pair(i,j));
				}
			}
		}
		int l=ones.size();
		for(int i=0;i<=l-1;i++)
			bfs(ones[i],n,m);
		for(int i=0;i<=n-1;i++)
		{
			for(int j=0;j<=m-1;j++)
				{
					cout<<dist[i][j]<<" ";
					if(j==m-1)
						cout<<endl;
				}
		}
		ones.clear();
		for(int i=0;i<=199;i++)
		{
			for(int j=0;j<=199;j++)
				dist[i][j]=numeric_limits<int>::max();
		}
	}
	return 0;
}