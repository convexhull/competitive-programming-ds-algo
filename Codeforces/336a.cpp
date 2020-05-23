#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long x,y;
    cin>>x>>y;
    long long p=abs(x)+abs(y);
    if(x>=0)
    {
        if(y>=0)
            cout<<0<<' '<<p<<' '<<p<<" " <<0;
        else
            cout<<0<<' '<<-p<<' '<<p<<" "<<0;
    }
    else
    {
        if(y>=0)
            cout<<-p<<" "<<0<<" "<<0<<" "<<p;
        else
            cout<<-p<<" "<<0<<" "<<0<<" "<<-p;
    }
    return 0;
}
