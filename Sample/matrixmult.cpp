#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector< vector<int> >a(n,vector<int>(n));
    for(int i=0;i<=n-1;i++)
        for(int j=0;j<=n-1;j++)
            cin>>a[i][j];
    vector< vector<int> >b(n,vector<int>(n));
    for(int i=0;i<=n-1;i++)
        for(int j=0;j<=n-1;j++)
            cin>>b[i][j];
    vector< vector<int> >c(n,vector<int>(n));
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            int sum=0;
            for(int k=0;k<=n-1;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }   
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
