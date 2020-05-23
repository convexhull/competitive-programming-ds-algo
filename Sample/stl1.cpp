#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int val;
    cin>>val;
    vector<int>v(n);
    for(int i=0;i<=n-1;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    vector<int>::iterator it;
    it=lower_bound(v.begin(),v.end(),val);
    cout<<it-v.begin()<<endl;
    it=upper_bound(v.begin(),v.end(),val);
    cout<<it-v.begin()<<endl;
    pair<vector<int>::iterator,vector<int>::iterator> p = equal_range(v.begin(),v.end(),26);
    cout<<p.first-v.begin()<<endl;
    cout<<p.second-v.begin()<<endl;
    return 0;
}
