#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,d;
    cin>>n>>m>>d;
    vector< vector<int> > matrix(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
    int mod=matrix[0][0]%d;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]%d!=mod)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    vector<int>v(n*m);
    int marker=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v[marker++]=matrix[i][j];
        }
    }
    sort(v.begin(),v.end());
    int mid=(n*m)/2;
    for(int i =0;i<n*m;i++)
    {
        ans+=abs(v[mid]-v[i]);
    }
    cout<<ans/d<<endl;
    return 0;
}
