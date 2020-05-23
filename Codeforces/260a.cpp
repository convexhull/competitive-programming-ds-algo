#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b,n,i;
    cin>>a>>b>>n;
    for( i=0;i<=9;i++)
    {
        if((a*10+i)%b==0)
        {
            break;
        }
    }
    if(i==10)
        cout<<-1;
    else
    {
        cout<<a*10+i;
        for(int i=1;i<=n-1;i++)
            cout<<0;
    }
    return 0;
}
