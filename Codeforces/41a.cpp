#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    reverse(b.begin(),b.end());
    a==b ? cout<< "YES" : cout<<"NO";
    return 0;
}
