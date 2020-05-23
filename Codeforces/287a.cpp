#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector< vector<char> > grid(6,vector<int>(6));
    for(int i=1;i<5;i++)
        for(int j=1;j<5;j++)
            cin>>grid[i][j];
    bool flag = false;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            if(grid[i-1][j]==grid[i][j] || grid[i+1][j]==grid[i][j] && grid[i][j-1]==grid[i][j] || grid[i][j+1]==grid[i][j])
                flag = true;
        }
    }
    flag ? cout<<"YES" : cout<<"NO";
    return 0;    
}

