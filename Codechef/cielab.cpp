#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    int c=a-b;
    string s=to_string(c);
    s[0]=='9' ? s[0]='1' : s[0]=(char)(s[0]+1);
    cout<<s;
    return 0;
}

