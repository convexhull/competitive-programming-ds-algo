#include<bits/stdc++.h>
using namespace std;
long double result(int n)
{
    long double ans=0.0;
    for(int i=1;i<=n;i++)
        ans+= (long double)1/i;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout<<setprecision(10)<<fixed;
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        cout<<n*result(n)<<endl;
    }
    return 0;
}
