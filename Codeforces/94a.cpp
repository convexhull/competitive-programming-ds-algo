#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,ans;
    cin>>s;
    unordered_map<string,int>mp;
    for(int i=0;i<10;i++)
    {
        string rep;
        cin>>rep;
        mp[rep]=i;
    }
    for(int i=0;i<=79;i+=10)
    {
       ans.push_back('0'+ mp[s.substr(i,10)]);
    }
    cout<<ans;
    return 0;
}
