#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>chld(n+1);
    vector<int>par(n+1);
    for(int i=2;i<=n;i++)
    {
        int x;
        cin>>x;
        par[i]=x;
        chld[x]++;
    }
    bool flag = true;
    for(int i=1;i<=n;i++)
    {
        if(chld[i])
        {
            int cnt = 0;
            for(int j=1;j<=n;j++)
            {
                if(par[j]==i && !chld[j])
                    cnt++;
            }
            if(cnt<3)
            {
                flag = false;
                break;
            }
        }
    }
    flag ? cout<<"Yes" : cout<<"No";
    return 0;    
}

