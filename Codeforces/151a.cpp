#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tot_drink=k*l;
    cout<<min(k*l/nl,min(c*d,p/np))/n;
    return 0;
}
