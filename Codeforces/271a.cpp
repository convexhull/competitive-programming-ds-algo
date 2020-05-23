#include<bits/stdc++.h>
using namespace std;
int distinct(int num)
{
    string s=to_string(num);
    set<int>ms;
    for(int i=0;i<s.length();i++)
    {
        ms.insert(s[i]);
    }
    if(ms.size()==4)
        return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string y;
    cin>>y;
    int num=stoi(y);
    num++;
    while(!distinct(num))
    {
        num++;
    }
    cout<<num;
    return 0;
}
