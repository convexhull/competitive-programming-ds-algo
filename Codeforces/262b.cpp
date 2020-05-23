#include<bits/stdc++.h>
using namespace std;
int  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n && k;i++)
    {
        if(v[i]<0)
            v[i]*=-1;
        else
            break;
        k--;
    }
    if(find(v.begin(),v.end(),0)!=v.end())
        cout<<accumulate(v.begin(),v.end(),0ll);
    else
    {
        long long mindex = distance(v.begin(),min_element(v.begin(),v.end()));
        for(long long i=1;i<=k;i++)
            v[mindex]*=-1;
        cout<<accumulate(v.begin(),v.end(),0ll);
    }
    return 0;
}


