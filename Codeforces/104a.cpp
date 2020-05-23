#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    n-=10;
    int ans;
    if(n<=0 || n>=12)
        ans=0;
    else if(n!=10)
        ans=4;
    else
        ans=15;
    cout<<ans;
    return 0;
}

