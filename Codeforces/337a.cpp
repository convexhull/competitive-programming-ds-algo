#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,ans=1e9;
    cin>>n>>m;
    vector<int>puz(m);
    for(int i=0;i<m;i++)
        cin>>puz[i];
    sort(puz.begin(),puz.end());
    int l=0,r=n-1;
    while(r<m)
    {
        ans=min(ans,puz[r]-puz[l]);
        l++;
        r++;
    }
    cout<<ans;
    return 0;
}
