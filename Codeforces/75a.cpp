#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    int num_res=a+b;
    string s=to_string(num_res);
    while(s.find("0")!=string::npos)
        s.erase(s.begin()+s.find("0"));
    string x=to_string(a);
    string y=to_string(b);
    while(x.find("0")!=string::npos)
        x.erase(x.begin()+x.find("0"));
    while(y.find("0")!=string::npos)
        y.erase(y.begin()+y.find("0"));
    int word_res=stoi(x)+stoi(y);
    int res=stoi(s);
    if(res==word_res)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
