#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<4*sqrt(a*b/c+b*c/a+c*a/b+2*(a+b+c))<<endl;
    return 0;
}
