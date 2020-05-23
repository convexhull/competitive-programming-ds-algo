#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int lp=0,rp=-1;
    int nob = 0,sum = 0;
    int ans = 0;
    while(lp<n && rp<n-1)
    {
        if(sum+v[rp+1]<=t)
        {
            rp++;
            sum+=v[rp];
            nob++;
        }
        else
        {
            ans = max(nob,ans);
            sum-=v[lp];
            nob--;
            lp++;
        }
    }
    ans = max(ans,nob);
    cout<<ans;
    return 0;
    
}

