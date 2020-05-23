#include<bits/stdc++.h>
using namespace std;
int first(vector< string > &cake)
{
    int val = 0;
    int n = cake.size();
    int m = cake[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if( (i+j)%2 == 0 && cake[i][j]=='G')
                val+=3;
            if( (i+j)%2 && cake[i][j] == 'R')
                val += 5;
        }
    }
    return val;
}
int second( vector< string > &cake)
{
    int val = 0;
    int n = cake.size();
    int m = cake[0].size();
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i+j)%2 == 0 && cake[i][j] == 'R')
                val += 5;
            if((i+j)%2 && cake[i][j]== 'G')
                val += 3;
        }
    }
    return val;
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
        vector< string > cake;
        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            cake.push_back(s);
        }
        cout<<min(first(cake),second(cake))<<endl;
    }
    return 0;
}

