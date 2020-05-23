#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<=n-1;i++)
        v[i]=i+1;
    reverse(v.end()-k-1,v.end());
    for(auto x:v)
        cout<<x<<" ";
    return 0;
}
