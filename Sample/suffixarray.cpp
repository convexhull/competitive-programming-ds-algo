#include<bits/stdc++.h>
using namespace std;
vector< pair<string,int> >suffixes;
void suffix(string &s)
{
    for(int i=0;i<=s.length()-1;i++)
    {
        suffixes.push_back(make_pair(s.substr(i,s.length()-i),i));
    }
    sort(suffixes.begin(),suffixes.end());
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    suffix(s);
    for(auto x:suffixes)
        cout<<x.first<<endl;
    return 0;
}
