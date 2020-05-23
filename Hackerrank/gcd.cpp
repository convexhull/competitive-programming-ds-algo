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
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<=n-1;i++)
            cin>>v[i];
        if(v.size()==1)
        {
            if(v[0]==1)
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
            continue;
        }
        bool flag=false;
        for(long long i=0;i<n;i++)
        {
            for(long long j=i+1;j<n;j++)
            {
                if(__gcd(v[i],v[j])==1)
                {
                    flag=true;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}
