#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string st;
    cin>>st;
    set<int>s;
    for(auto x:st)
    {
        s.insert(x);
    }
    if(s.size()%2)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}
