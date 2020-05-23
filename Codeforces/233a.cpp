#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n%2)
    {
        cout<<-1;
        return 0;
    }
    for(int i=1;i<=n;i+=2)
    {
        cout<<i+1<<" "<<i<<" ";
    }
    return 0;
}
