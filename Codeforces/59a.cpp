#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<97)
            a++;
        else
            b++;
    }
    for(int i=0;i<=s.length()-1;i++)
    {
        a>b ? s[i]=toupper(s[i]) : s[i]=tolower(s[i]);
    }
    cout<<s;
    return 0;
}
