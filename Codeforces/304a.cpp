#include<bits/stdc++.h>
using namespace std;
vector<bool>vis(100000001);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int cnt = 0 ;
    for(int i=1;i<=n;i++)
        vis[i*i]=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(vis[i*i-j*j])
                cnt++;
        }
    }
    cout<<cnt/2;
    return 0;
}

