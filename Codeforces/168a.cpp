#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,x,y;
    cin>>n>>x>>y;
    int req=ceil(y/100.0*n);
    req-x >=0 ? cout<<req-x : cout<<0;
    return 0;
}
