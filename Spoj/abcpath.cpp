#include<bits/stdc++.h>
using namespace std;
vector<string>grid;
vector< vector<int> >cache(100,vector<int>(100,-1));
int h,w;
string moksh="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int dp(int idx, int row, int col)
{
    if(row<0 || row >=h || col<0 || col>=w)
        return 0;
    if(idx>25)
        return 0;
    if(grid[row][col]!=moksh[idx])
        return 0;
    if(cache[row][col]!=-1)
        return cache[row][col];
    int ans=0;
    for(int x=-1;x<=1;x++)
    {
        for(int y=-1;y<=1;y++)
        {
            if(x==0 && y==0)
                continue;
            cache[row][col]=dp(idx+1,row+x,col+y);
            ans=max(ans,cache[row][col]);
        }
    }
    return 1+ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while(1)
    {
        static int cnt=0;
        cnt++;
        cin>>h>>w;
        if(h==0 && w==0)
            break;
        int ans=0;
        for(int i=1;i<=h;i++)
        {
            string s;
            cin>>s;
            grid.push_back(s);
        }
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(grid[i][j]=='A')
                    ans=max(ans,dp(0,i,j));
            }
        }
        cout<<"Case "<<cnt<<": "<<ans<<'\n';
        grid.clear();
        for(int i=0;i<99;i++)
            for(int j=0;j<99;j++)
                cache[i][j]=-1;
    }
    return 0;
}
    



        
