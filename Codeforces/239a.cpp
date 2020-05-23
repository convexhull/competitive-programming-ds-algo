#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int y,k,n;
    cin>>y>>k>>n;
    int d = y%k;
    y+=(k-d);
    for(int i=y;i<n-y;i+=k)
        cout<<i-d<<" ";
    return 0;    
}

