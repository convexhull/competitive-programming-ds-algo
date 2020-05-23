#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    m=m%((n*n+n)/2);
    int i=1;
    while(m>=i)
    {
        m-=i;
        i++;
    }
    cout<<m;
    return 0;
}
