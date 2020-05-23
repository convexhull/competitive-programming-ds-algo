#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c,n,ans=0;
    cin>>a>>b>>c>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int loc;
        cin>>loc;
        v.push_back(loc);
    }
    for(auto x:v)
    {
        if(x>b && x<c)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
