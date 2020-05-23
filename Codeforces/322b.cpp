#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int r,g,b,ans = 0;
    cin>>r>>g>>b;
    int t = min(min(r,g),b);
    r-=t;
    g-=t;
    b-=t;
    ans += t;
    ans += r/3;
    ans += g/3;
    ans += b/3;
    cout<<ans;
    return 0;
    
}

