#include<bits/stdc++.h>
using namespace std;
vector<long long>pow3(10000001);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    long long mod = 1000000007;
    pow3[0]=1;
    for(long long i=1;i<=10000000;i++)
        pow3[i] = (pow3[i-1]*3)%mod;
    vector<long long>v(10000000);
    v[2]=3;
    for(long long i=3;i<=10000000;i++)
    {
        v[i] = (pow3[i-1]-v[i-1])%mod;
        if(v[i]<0)
            v[i]+=mod;
    }
    cout<<v[n];
    return 0;
    
    
}

