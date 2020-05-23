#include<bits/stdc++.h>
using namespace std;
int ans(int x)
{
    int res=1;
    for(int i=2;i*i<=x;i++)
    {
        int cnt=0;
        while(x%i==0)
        {
            cnt++;
            x/=i;
        }
        res *= (cnt+1);
    }
    if(x!=1)
        res *=2;
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        int cd=__gcd(a,b);
        cout<<ans(cd)<<'\n';
    }
    return 0;
}
