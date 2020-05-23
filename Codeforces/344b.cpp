#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = true;
    if((a+b-c)%2)
        flag = false;
    int f = (a-c+b)/2;
    int s = (c-a+b)/2;
    int t = (a+c-b)/2;
    if(f<0 || s<0 || t<0)
        flag = false;
    flag ? cout<<f<<" "<<s<<" "<<t : cout<<"Impossible";
    return 0;
}
