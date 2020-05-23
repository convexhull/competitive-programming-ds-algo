#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,t;
    getline(cin,t);
    getline(cin,s);
    map<int,int>mp,req;
    bool flag = true;
    for(auto x:t)
        mp[x]++;
    for(auto x:s)
        req[x]++;
    for(auto x:s)
        if(x!=' ' && mp[x]<req[x])
            flag = false;
    flag ? cout<<"YES" : cout<<"NO";
    return 0;
    
}

