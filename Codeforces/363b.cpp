#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    long long sum = 0;
    for(long long i=0;i<k;i++)
        sum+=v[i];
    long long ans = sum;
    long long idx = 0;
    for(long long i=1;i<=n-k;i++)
    {
        sum -= v[i-1];
        sum += v[i+k-1];
        if(sum<ans)
            idx = i;
        ans = min(ans,sum);
    }
    cout<<idx+1;
    return 0;
}

