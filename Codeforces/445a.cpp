#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector< vector<char> > matrix(n, vector<char>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='-')
                matrix[i][j]='-';
            else
            {
                if((i+j)%2)
                    matrix[i][j]='B';
                else
                    matrix[i][j]='W';
            }
        }
    for(auto x:matrix)
    {
        for(auto y:x)
            cout<<y;
        cout<<endl;
    }
    return 0;
}

