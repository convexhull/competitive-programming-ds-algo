#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int cnt=0;
    for(auto x:s)
    {
        if(x=='4'|| x=='7')
            cnt++;
    }
    if(cnt==4 || cnt==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
