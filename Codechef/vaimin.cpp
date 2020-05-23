#include<bits/stdc++.h>
using namespace std;
int c = 1;
int rec(int p, int q, int r)
{
    if(p==0 && q==0)
        return 0;
    if(p==0)
        return 1;
    if(q==0)
        return 1;
    int gd = rec(p-1,q,r+1);
    int bd = (r-1>c ? rec(p,q-1,r-1) : 0);
    return gd + bd;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int p,q,m;
    cin>>p>>q>>c>>m;
    for(int i=1;i<=m;i++)
    {

    }
    cout<<rec(p,q,0)<<endl;
    return 0;   
}

