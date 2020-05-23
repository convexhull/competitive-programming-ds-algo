#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		vector< set<int> > retro(k+10);
		for(int i=1;i<=n;i++)
		{
			int l;
			scanf("%d",&l);
			for(int j=1;j<=l;j++)
			{
				int a;
				scanf("%d",&a);
				retro[a].insert(i);
			}
		}
		map<int,int>mp;
		for(int i=1;i<=k;i++)
		{
			for(set<int>::iterator it=retro[i].begin();it!=retro[i].end();it++)
			{
				mp[*it]++;
			}
		}
		int cnt=0;
		for(int i=1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(mp[i]+mp[j]>=k)
					cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}