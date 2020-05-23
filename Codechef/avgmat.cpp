#include<bits/stdc++.h>
using namespace std;
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
        vector<string>grid(n);
        vector< pair<int,int> > house;
        for(int i=0;i<n;i++)
            cin>>grid[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == '1')
                    house.push_back(make_pair(i,j));
            }
        }
        for(int dist = 1;dist<=n+m-2;dist++)
        {
            int l = house.size();
            int cnt = 0;
            for(int i=0;i<l;i++)
            {
                int c = 0;
                for(int j=0;j<l;j++)
                {
                    int d = abs(house[j].first-house[i].first) + abs(house[j].second - house[i].second);
                    if(d==dist)
                        c++;
                }
                cnt += c;
            }
            cout<<cnt/2<<' ';
        }
        cout<<endl;
    }
	return 0;
}

