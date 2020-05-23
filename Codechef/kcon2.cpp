#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(long long i=0;i<n;i++)
            cin>>v[i];
        vector<long long>psum(n),ssum(n),mxt(n);
        for(long long i=0;i<n;i++)
            psum[i]= (i==0 ? v[0] : psum[i-1]+v[i]) ;
        for(long long i=n-1;i>=0;i--)
            ssum[i]= (i==n-1 ? v[n-1] : ssum[i+1]+v[i]);
        for(long long i=0;i<n;i++)
            mxt[i]= (i==0 ? v[0] : max(mxt[i-1]+v[i],v[i]));
        long long tbls, tbrs, tsum, tbsum, bls, brs, sum, bsum;
        tbls = bls = *max_element(psum.begin(),psum.end());
        tbrs =  brs = *max_element(ssum.begin(),ssum.end());
        tsum = sum  = accumulate(v.begin(),v.end(),(long long)0);
        tbsum = bsum = *max_element(mxt.begin(),mxt.end());
        for(long long i=1;i<k;i++)
        {
            tbsum = max(max(tbsum,bsum),tbrs+bls);
            tbls = max(tbls,tsum+bls);
            tbrs = max(brs,sum+tbrs);
            tsum = tsum + sum;
        }
        cout<<tbsum<<endl;    
    }
    return 0;    
}

