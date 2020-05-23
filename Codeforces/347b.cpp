#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(v[i]!=i)
            cnt++;
    bool flag = false;
    if(cnt==0)
        cout<<n;
    else
    {
        for(int i=0;i<n;i++)
            if(v[i]==i)
                v[i]=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=-1)
            {
                if(v[v[i]]==i)
                {
                    flag = true;
                    break;
                }
            }
        }
        flag ? cout<<n-cnt+2 : cout<<n-cnt+1;
    }
    return 0;
}

