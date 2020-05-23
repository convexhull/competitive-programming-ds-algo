#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    if(a.length()!=b.length())
        cout<<"NO";
    else
    {
        if(count(a.begin(),a.end(),'1'))
        {
            if(count(b.begin(),b.end(),'1'))
                cout<<"YES";
            else
                cout<<"NO";
        }
        else if(count(b.begin(),b.end(),'1')==0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}

