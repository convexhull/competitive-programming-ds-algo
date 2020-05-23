#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<=n-1;i++)
        cin>>v[i];
    sort(v.rbegin(),v.rend());
    long long ans=0,last_max=-1e9;
    for(long long i=0;i<=n-1;i++)
    {
        if(i==0)
        {
            ans+=v[i];
            last_max=v[i];
            continue;
        }
        if(v[i]<last_max)
        {
            ans+=v[i];
            last_max=v[i];
        }
        else
        {
            last_max--;
            if(last_max<0)
                break;
            ans+=last_max;
            
        }
    }
    cout<<ans<<endl;
    return 0;
}

