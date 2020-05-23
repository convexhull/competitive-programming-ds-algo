#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    for(int i=0;i<=n;i++)
    {
        s.push_back((char)i+'0');
        s.push_back(' ');
    }
    for(int i=n-1;i>=0;i--)
    {
        s.push_back((char)i+'0');
        s.push_back(' ');
    }
    vector<string>v;
    for(int i=0;i<=n;i++)
    {
        string x;
        for(int j=1;j<=2*(n-i);j++)
            x.append(" ");
        x.append(s.substr(0,2*i+1)+s.substr(4*n-2*i+1,2*i));
        v.push_back(x);
    }
    for(int i=0;i<=v.size()-1;i++)
        cout<<v[i]<<endl;
    reverse(v.begin(),v.end());
    for(int i=1;i<=v.size()-1;i++)
        cout<<v[i]<<endl;
    return 0;
}
