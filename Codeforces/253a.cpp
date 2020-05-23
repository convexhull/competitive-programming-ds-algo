#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    string s;
    string b = n>=m ? "BG" : "GB";
    for(int i=1;i<=min(n,m);i++)
        s.append(b);
    int t = min(n,m);
    n-=t;
    m-=t;
    while(n--)
        s.push_back('B');
    while(m--)
        s.push_back('G');
    cout<<s;
    return 0;    
}

