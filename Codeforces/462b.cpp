#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    long long ans=0;
    vector<long long>cnt(100);
    for(auto x:s)
        cnt[x]++;
    sort(cnt.rbegin(),cnt.rend());
    long long i=0,c=0;
    while(c+cnt[i]<k)
    {
        ans+=(cnt[i]*cnt[i]);
        c+=cnt[i];
        i++;
    }
    ans+=(k-c)*(k-c);
    cout<<ans;
    return 0;
}


