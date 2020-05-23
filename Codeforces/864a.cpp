#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    unordered_map<int,int>cnt;
    int x;
    cin>>x;
    cnt[x]++;
    int y;
    for(int i=2;i<=n;i++)
    {
        int t;
        cin>>t;
        if(t!=x)
        {
            y=t;
            cnt[t]++;
        }
        else
            cnt[x]++;
    }
    if(cnt[x]==cnt[y]&&cnt[x]+cnt[y]==n)
    {
        cout<<"YES"<<endl;
        cout<<x<<" "<<y;
    }
    else
        cout<<"NO";
    return 0;
}

