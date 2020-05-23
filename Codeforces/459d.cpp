#include<bits/stdc++.h>
using namespace std;
vector<long long>fnw(1000010);
void update(long long idx, long long val)
{
    while(idx<=1e6)
    {
        fnw[idx]+=val;
        idx += (idx & -idx);
    }
}
long long query(long long idx)
{
    long long ans = 0;
    while(idx>0)
    {
        ans += fnw[idx];
        idx -= (idx & -idx);
    }
    return ans ;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long n;
    cin>>n;
    vector<long long>v(n),arr1(n),arr2(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    unordered_map<long long,long long>cnta,cntb;
    for(long long i=0;i<n;i++)
    {
        cnta[v[i]]++;
        arr1[i] = cnta[v[i]];
    }
    for(long long i=n-1;i>=0;i--)
    {
        cntb[v[i]]++;
        arr2[i] = cntb[v[i]];
    }
    for(long long i=0;i<n;i++)
        update(arr2[i],1);
    long long ans =0;
    for(long long i=0;i<n;i++)
    {
        update(arr2[i],-1);
        ans += (query(arr1[i]-1));
    }
    cout<<ans;
	return 0;
}

