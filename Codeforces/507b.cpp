#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int r,x,y,dx,dy;
    cin>>r>>x>>y>>dx>>dy;
    long double dist=(long double)sqrt(pow(dx-x,2)+pow(dy-y,2));
    cout<<(int)ceil(dist/(2*r))<<endl;
    return 0;
}
