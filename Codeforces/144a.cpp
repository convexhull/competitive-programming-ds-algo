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
    int mini=numeric_limits<int>::max();
    int maxi=*max_element(v.begin(),v.end());
    int min_idx=0,max_idx=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=mini)
        {
            min_idx=i;
            mini=v[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>=maxi)
        {
            max_idx=i;
            break;
        }
    }
    ans+=max_idx;
    ans+=(n-1-min_idx);
    if(max_idx>min_idx)
        ans-=1;
    cout<<ans<<endl;
    return 0;
}

