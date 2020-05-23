#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector< pair<int,int > > v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    int ans = -1;
    for(int i=0;i<n;i++)
    {
        if(v[i].second >= ans)
            ans = v[i].second;
        else
            ans = v[i].first;
    }
    cout<<ans;
    return 0;
}
