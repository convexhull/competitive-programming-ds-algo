#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long t,sx,ex, sy, ey;
    cin>>t>>sx>>sy>>ex>>ey;
    long long dx = ex-sx;
    long long dy = ey-sy;
    string s;
    cin>>s;
    long long time= 0;
    for(auto x:s)
    {
        if(!dx && !dy)
            break;
        if(x=='E')
            if(dx > 0)
                dx--;
        if(x=='W')
            if(dx<0)
                dx++;
        if(x=='N')
            if(dy>0)
                dy--;
        if(x=='S')
            if(dy<0)
                dy++;
        time++;
    }
    dx || dy ? cout<<-1 : cout<<time;
    return 0;
}
