#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    long long ans = *max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end());
    long long cnt=0;
    sort(v.begin(),v.end());
    vector<bool>vis(200005);
    for(long long i=0;i<n;i++)
    {
        if(!ans)
        {
            if(binary_search(v.begin(),v.end(),v[i]+ans))
                cnt += (upper_bound(v.begin(),v.end(),v[i]+ans) - lower_bound(v.begin(),v.end(),v[i]+ans)-1) ;
        }
        else
        {
            if(binary_search(v.begin(),v.end(),v[i]+ans))
                cnt+=(upper_bound(v.begin(),v.end(),v[i]+ans) - lower_bound(v.begin(),v.end(),v[i]+ans) );
        }
    }
    if(!ans)
        cnt/=2;
    cout<<ans<<" "<<cnt;
    return 0;
}

