#include<bits/stdc++.h>
using namespace std;
long long n,m;
vector< vector<long long> > num(2010, vector<long long>(2010));
vector< vector<long long> > grid(2010,vector<long long>(2010));
vector< vector<long long> > dp(2010, vector<long long>(2010));
vector< vector< vector<long long> > > para(2010,vector< vector<long long> > (2010)); 
map< pair<long long,long long> , long long  > rnk;
map< pair<long long,long long> , pair<long long,long long>  > par;
pair<long long,long long> findset(pair<long long,long long>);
void process()
{
    for(long long i=0;i<=n;i++)
        for(long long j=0;j<=m;j++)
            para[i][j].push_back(grid[i][j]);
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            long long sky = 0 , earth = 0;
            bool sf1 = false, sf2 = false , sf3 = false, ef1 = false, ef2 = false, ef3 = false ; 
            //Sky
            if( para[i-1][j].size() < 2)
            {
                sky = dp[i-1][j] + 1;
                sf1 = true;
            }
            else if( find(para[i-1][j].begin(),para[i-1][j].end(),grid[i][j]) != para[i-1][j].end())
            {
                sky = dp[i-1][j] +  1;
                sf2 = true;
            }
            else 
            {
                sky = num[i-1][j] + 1;
                sf3 = true;
            }
            //Earth 
            if(para[i][j-1].size() < 2)
            {
                earth = dp[i][j-1] + 1;
                ef1 = true;
            }
            else if( find(para[i][j-1].begin(),para[i][j-1].end(), grid[i][j] ) != para[i][j-1].end() )
            {
                earth = dp[i][j-1] + 1;
                ef2 = true;
            }
            else 
            {
                earth = num[i][j-1] + 1;
                ef3 = true;
            }
            if(sky >= earth)
            {
                if(sf1)
                {
                    para[i][j] = para[i-1][j];
                    para[i][j].push_back(grid[i][j]);
                    para[i-1][j].push_back(grid[i][j]);
                }
                if(sf2)
                {
                    para[i][j] = para[i-1][j];
                }
                if(sf3)
                {
                    para[i][j].push_back(grid[i][j]);
                    para[i][j].push_back(grid[i-1][j]);
                    para[i-1][j] = para[i][j];
                }
                if( i-1!=0 && j-1 !=0 &&  para[i][j]==para[i-1][j-1]);
                 //   sky++;
            }
            else if(earth > sky)
            {
                if(ef1)
                {
                    para[i][j] = para[i][j-1];
                    para[i][j].push_back(grid[i][j]);
                    para[i][j-1].push_back(grid[i][j]);
                }
                if(ef2)
                {
                    para[i][j] = para[i][j-1];
                }
                if(ef3)
                {
                    para[i][j].push_back(grid[i][j]);
                    para[i][j].push_back(grid[i][j-1]);
                    para[i][j-1] = para[i][j];
                }
                if( i-1!=0 &&  j-1!=0 && para[i][j] == para[i-1][j-1]);
                //    earth++;
            }
            dp[i][j]= max(earth, sky);
        }
    }
}
void create_set()
{
    long long cnt = 1;
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
        {
            rnk[{i,j}] = 0 ; 
            par[{i,j}] = {i,j};
        }
}
void union_set(pair<long long,long long> x, pair<long long,long long> y)
{
    pair<long long,long long>  PX  =  findset(x);
    pair<long long,long long>  PY  = findset(y);
    if(rnk[PX] > rnk[PY])
        par[PY] = PX;
    else 
        par[PX] = PY;
    if(rnk[PX]==rnk[PY])
        rnk[PY] ++;
}
pair<long long,long long> findset(pair<long long,long long> x)
{
    if(x!=par[x])
        par[x] = findset(par[x]);
    return par[x];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<=m;j++)
            cin>>grid[i][j];
    create_set();
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            if(grid[i][j] == grid[i-1][j])
                union_set({i,j},{i-1,j});
            if(grid[i][j] == grid[i][j+1])
                union_set({i,j},{i,j+1});
            if(grid[i][j] == grid[i+1][j])
                union_set({i,j},{i+1,j});
            if(grid[i][j] == grid[i][j-1])
                union_set({i,j},{i,j-1});
        }
    }
    vector< vector<pair<long long,long long> > > graph(n+2,vector< pair<long long, long long> > (m+2));
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            graph[i][j] = par[{i,j}];
        }
    }
    map< pair<long long,long long> , long long > cnt;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            cnt[graph[i][j]] ++;
        }
        for(long long j=1;j<=m;j++)
            num[i][j] = cnt[graph[i][j]];

    }
    cout<<endl;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
            cout<<num[i][j]<<" ";
        cout<<endl;
    }
    process();
    long long ans = 0;
    for(long long i=1;i<=n;i++)
        ans = max(ans, *max_element(dp[i].begin(),dp[i].end()) ) ;
    cout<<endl;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
            cout<<dp[i][j]<<" " ;
        cout<<endl;
    }
    
    cout<<ans<<endl;
    return 0;
}

