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
    long long q;
    cin>>q;
    for(long long i=1;i<=q;i++)
    {
        long long x,y;
        cin>>x>>y;
        for(long long j=0;j<n;j++)
        {
            long long val = j & x;
            if(j==val)
                v[j]-=y;
        }
        long long cnt = 0;
        for(long long k=0;k<n;k++)
            if(v[k]>0)
                cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}

