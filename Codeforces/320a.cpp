#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='4' && s[i]!='1')
        {
            cout<<"NO";
            return 0;
        }
    }
    if(s.find("444")!=string::npos)
    {
        cout<<"NO";
        return 0;
    }
    if(s[0]=='4')
    {
        cout<<"NO";
        return 0;
    } 
    cout<<"YES";
    return 0;
}
