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
    if(n==1 || n==2)
    {
        cout<<n<<endl;
        return 0;
    }
    long long ans = 1, cnt = 2; 
    for(long long i=1;i<n-1;i++)
    {
        if(v[i+1]==v[i]+v[i-1])
            cnt++;
        else
        {
            ans = max(ans,cnt);
            cnt=2;
        }
        if(i==n-2)
            ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}

