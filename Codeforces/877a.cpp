#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int d = count(s.begin(),s.end(),"Danil");
    int o = count(s.begin(),s.end(),"Olya");
    int s = count(s.begin(),s.end(),"Slava");
    int a = count(s.begin(),s.end(),"Ann");
    int n = count(s.begin(),s.end(),"Nikita");
    if(d+o+s+a+n == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

