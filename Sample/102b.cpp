#include<bits/stdc++.h>
using namespace std;
int ok(string &s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
        sum+=(s[i]-'0');
    s=to_string(sum);
    if(s.size()>1)
        return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int cnt=0;
    while(s.size()>1)
    {
        ok(s);
        cnt++;
    }
    cout<<cnt;
    return 0;
}
