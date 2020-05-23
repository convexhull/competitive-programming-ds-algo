#include<bits/stdc++.h>
using namespace std;
vector<long long>psum;
long long sum(long long l, long long r)
{
    long long val ;
    l==0 ? val =  psum[r] : val =  psum[r]-psum[l-1];
    return val;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    psum.resize(n);
    psum[0]=v[0];
    for(long long i=1;i<n;i++)
        psum[i]=psum[i-1]+v[i];
    pair<long long,long long> ans = make_pair(0,k);
    long long max_sum = sum(0,k-1)+sum(k,2*k-1);
    pair<long long,long long> f_max = make_pair(0,sum(0,k-1));
    for(long long i=2*k;i<n;i++)
    {
        long long temp = sum(i-2*k+1,i-k);
        if(temp > f_max.second)
        {
            f_max.second = temp;
            f_max.first = i-2*k+1;
        }
        temp = f_max.second + sum(i-k+1,i);
        if(temp > max_sum)
        {
            max_sum = temp;
            ans.first = f_max.first;
            ans.second = i-k+1;
        }
    }
    cout<<ans.first+1<<" "<<ans.second+1;
    return 0;
}


