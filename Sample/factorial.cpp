#include<bits/stdc++.h>
using namespace std;
long long fact(long long x)
{
    long long ans=1;
    for(long long i=1;i<=x;i++)
        ans*=i;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
