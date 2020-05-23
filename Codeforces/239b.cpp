#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long y,k,n;
    cin>>y>>k>>n;
    bool flag = false;
    long long next_ml = (y%k) ? k*(y/k+1) : y;
    for(long long i=next_ml;i<=n;i+=k)
        if(i-y!=0)
        {
            flag = true;
            cout<<i-y<<" ";
        }
    if(!flag)
        cout<<-1;
    return 0;
    
}

