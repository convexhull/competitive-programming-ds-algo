#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        int flag=0;
        if(v[i]%m)
            flag=1;
        v[i]/=m;
        if(flag)
            v[i]++;
    }
    vector<int>ans;
    int maxi=*max_element(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]==maxi)
            ans.push_back(i);
    }
    cout<<ans.back()+1;
    return 0;
}
