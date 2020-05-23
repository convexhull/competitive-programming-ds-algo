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
        vector<long long>maxtill(n);
        maxtill[0]=v[0];
        for(long long i=1;i<n;i++)
            maxtill[i]=max(maxtill[i-1]+v[i],v[i]);
        if(k==1)
        {
            cout<<*max_element(maxtill.begin(),maxtill.end())<<endl;
        }
        else
        {
            if(v.size()==1)
            {
                v[0]>=0 ? cout<<v[0]*k<<endl : cout<<v[0]<<endl;
                continue;
            }
            vector<long long>psum(n),ssum(n);
            psum[0]=v[0];
            for(long long i=1;i<n;i++)
                psum[i]=psum[i-1]+v[i];
            ssum[n-1]=v[n-1];
            for(long long i=n-2;i>=0;i--)
                ssum[i]=ssum[i+1]+v[i];
            if(max_element(psum.begin(),psum.end())==psum.end()-1 && max_element(ssum.begin(),ssum.end())==ssum.begin())
                cout<<k*accumulate(v.begin(),v.end(),0)<<endl;
            else
            {
                cout<<max(*max_element(maxtill.begin(),maxtill.end()),*max_element(psum.begin(),psum.end())+*max_element(ssum.begin(),ssum.end()))<<endl;
            }
        }
    }
    return 0;    
}

