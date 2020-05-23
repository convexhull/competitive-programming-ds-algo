#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    string r = s;
    reverse(r.begin(),r.end());
    cout<<r+s;
    
    return 0;
}

