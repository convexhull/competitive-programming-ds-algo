#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector< vector<char> > matrix(n+2,vector<char>(m+2));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>matrix[i][j];
    int cnt = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(matrix[i][j]=='P')
            {
                if(matrix[i-1][j]=='W')
                {
                    matrix[i-1][j]='.';
                    cnt++;
                }
                if(matrix[i+1][j]=='W')
                {
                    matrix[i+1][j]='.';
                    cnt++;
                }
                if(matrix[i][j-1]=='W')
                {
                    matrix[i][j-1]='.';
                    cnt++;
                }
                if(matrix[i][j+1]=='W')
                {
                    matrix[i][j+1]='.';
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

