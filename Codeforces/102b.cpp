#include<bits/stdc++.h>
using namespace std;
int func(string &s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
        sum+=(s[i]-'0');
    s=to_string(sum);
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int cnt=0;
    while(s.length()>1)
    {
        func(s);
        cnt++;
    }
    cout<<cnt;
    return 0;
}
