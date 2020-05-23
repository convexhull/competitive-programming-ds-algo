#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    int ans;
    if(n%6==1)
        ans=x%MOD;
    if(n%6==2)
        ans=y%MOD;
    if(n%6==3)
        ans=(y-x)%MOD;
    if(n%6==4)
        ans=(-x)%MOD;
    if(n%6==5)
        ans=(-y)%MOD;
    if(n%6==0)
        ans=(x-y)%MOD;
    if(ans<0)
        cout<<(int)(ans+MOD);
    else
        cout<<ans;
    return 0;
}
