#include<bits/stdc++.h>
using namespace std;
long long func(long long x,long long y,long long p)
{
    long long result=1;
    while(y)
    {
        if(y & 1)
            result=(result*x)%p;
        y>>=1;
        x=(x*x)%p;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long a,b,c;
    cin>>a>>b>>c;
    long long p=1000000007;
    long long z=func(b,c,p-1);
    long long ans=func(a,z,p);
    cout<<ans<<endl;
    return 0;
}
