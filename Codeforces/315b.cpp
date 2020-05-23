#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,m;
    cin>>n>>m;
    vector<long long>v(n),modi(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    long long add = 0;
    for(long long i=1;i<=m;i++)
    {
        long long t;
        cin>>t;
        if(t==1)
        {
            long long idx,x;
            cin>>idx>>x;
            idx--;
            long long pval = add + v[idx] + modi[idx];
            modi[idx] -= ( pval - x );
        }
        if(t==2)
        {
            long long y;
            cin>>y;
            add+=y;
        }
        if(t==3)
        {
            long long q;
            cin>>q;
            q--;
            cout<<v[q]+add+modi[q]<<endl;
        }
    }
    return 0;
}

