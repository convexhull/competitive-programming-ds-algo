#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    n-=2;
    if(n<0)
    {
        cout<<0;
        return 0;
    }
    int z=min(a,b);
    int     ans=0;
    ans+=z;
    while(n>0)
    {
        n-=1;
        ans+=min(c,z);
    }
    cout<<ans;
    return 0;
}
