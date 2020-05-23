#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<=s1.length();i++)
    {
        s2[i]=((s1[i]-'0')^(s2[i]-'0'))+'0';
    }
    cout<<s2;
    return 0;

}
