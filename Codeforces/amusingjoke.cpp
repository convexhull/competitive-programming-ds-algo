#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    bool flag=true;
    if(s3.length()!=s1.length()+s2.length())
    {
        cout<<"NO";
        return 0;
    }
    s1+=s2;
    unordered_map<char,int>mp;
    for(int i=0;i<=s1.length();i++)
    {
        mp[s1[i]]++;
    }
    for(int i=0;i<=s3.length();i++)
        mp[s3[i]]--;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second != 0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
