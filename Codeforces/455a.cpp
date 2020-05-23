#include<bits/stdc++.h>
using namespace std;
int  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long  n;
    cin>>n;
    vector<long long >v(n);
    for(long long  i=0;i<n;i++)
        cin>>v[i];
    int mx = *max_element(v.begin(),v.end());
    vector<long long >freq(100010);
    for(long long  i=0;i<n;i++)
        freq[v[i]]++;
    vector<long long>dp(100010);
    dp[1]=freq[1];
    for(long long i=2;i<=100000;i++)
        dp[i]=max(max(dp[i-2]+i*freq[i], dp[i-2]),dp[i-1]);
    cout<<dp[mx];
    return 0;
    
}

