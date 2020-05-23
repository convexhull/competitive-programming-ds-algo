#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int hay=k/n;
    int needle=k-hay*(n-1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            j==i ? cout<<needle : cout<<hay;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
