#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int gcd1 = __gcd(a,b), gcd2 = __gcd(c,d);
    a/=gcd1;b/=gcd1;c/=gcd2;d/=gcd2;
    if(c*b==d*a)
        cout<<0<<'/'<<1;
    else if(c*b>d*a)
    {
        int hcf = __gcd(c*b-d*a,c*b);
        cout<<(c*b-d*a)/hcf<<'/'<<(c*b)/hcf;
    }
    else
    {
        int hcf = __gcd(d*a-c*b,d*a);
        cout<<(d*a-c*b)/hcf<<'/'<<(d*a)/hcf;
    }
    return 0;
    
}

