#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    long long vas=0,pet=0;
    vector<long long>v(100010);
    for(long long i=1;i<=n;i++)
    {
        long long x;
        cin>>x;
        v[x]=i;
    }
    long long m;
    cin>>m;
    while(m--)
    {
        long long s;
        cin>>s;
        vas+=v[s];
        pet+=(n-v[s]+1);
    }
    cout<<vas<<" "<<pet;
    return 0;
}
