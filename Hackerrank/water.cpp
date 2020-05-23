#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long hcf=__gcd(a,b);
        if(c%hcf)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        a/=hcf;
        b/=hcf;
        c/=hcf;
        if(c>max(a,b))
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
    }
    return 0;
}
