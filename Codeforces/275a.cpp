#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector< vector<int> > light(5,vector<int>(5));
    for(int i=1;i<=3;i++)
        for(int j=1;j<=3;j++)
        {
            int a;
            cin>>a;
            light[i][j]+=a;
            light[i-1][j]+=a;
            light[i+1][j]+=a;
            light[i][j-1]+=a;
            light[i][j+1]+=a;
        }
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<!(light[i][j]%2);
        }
        cout<<endl;
    }
    return 0;
}
