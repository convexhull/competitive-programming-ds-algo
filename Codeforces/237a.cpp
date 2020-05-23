#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int ans=0;
    vector< pair<int,int> > v;
    for(int i=1;i<=n;i++)
    {
        int h,m;
        cin>>h>>m;
        v.push_back(make_pair(h,m));
    }
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]==v[i])
            cnt+=1;
        else
            cnt=0;
        ans=max(ans,cnt);
    }
    cout<<ans+1;
    return 0;
}
