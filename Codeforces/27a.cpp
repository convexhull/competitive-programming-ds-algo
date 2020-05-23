#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>vis(4000);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vis[x]=true;
    }
    for(int i=1;i<4000;i++)
        if(!vis[i])
        {
            cout<<i;
            return 0;
        }
    return 0;
}
