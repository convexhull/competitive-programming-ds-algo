#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s,x;
    cin>>s;
    int cnta=1,cntb=0;
    for(int i=1;i<n;i++)
    {
        string a;
        cin>>a;
        if(a==s)
            cnta++;
        else
        {
            x=a;
            cntb++;
        }
    }
    cnta>cntb ? cout<<s : cout<<x;
    return 0;
}
