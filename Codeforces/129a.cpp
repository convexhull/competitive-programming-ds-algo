#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++)
        cin>>v[i];
    int sum=accumulate(v.begin(),v.end(),0);
    int ans=0;
    for(int i=0;i<a;i++)
    {
        if((sum-v[i])%2==0)
            ans++;
    }
    cout<<ans;
    return 0;
}
