#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k,ans=0;
    cin>>n>>k;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    for(long long i=0;i<n;i++)
    {
        if(binary_search(arr.begin(),arr.end(),arr[i]+k))
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
