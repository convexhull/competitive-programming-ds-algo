#include<bits/stdc++.h>
using namespace std;
vector< vector<long long> > ans(10,vector<long long>(1000001));
long long rec(long long x)
{
    if(x <10)
        return x;
    long long nn = x;
    long long prod = 1;
    while(nn>0)
    {
        if(nn%10!=0)
            prod*=(nn%10);
        nn/=10;
    }
    return rec(prod);
}
void prep()
{
    vector<long long>v(1000001);
    for(long long i=1;i<=1000000;i++)
        v[i]=rec(i);
    for(long long i=1;i<=1000000;i++)
        ans[v[i]][i]++;
    for(long long i=0;i<10;i++)
    {
        for(long long j=1;j<=1000000;j++)
        {
            long long t = ans[i][j];
            ans[i][j] = t + ans[i][j-1];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    prep();
    long long Q;
    cin>>Q;
    while(Q--)
    {
        long long l,r,k;
        cin>>l>>r>>k;
            cout<<ans[k][r]-ans[k][l-1]<<endl;
    }
    return 0;
}

