#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,ans;

    cin>>s;
    for(int i=0;i<s.length();)
    {
        if(s[i]=='.')
        {
            ans.push_back('0');
            i++;
            continue;
        }
        if(s[i]=='-')
        {
            if(s[i+1]=='-')
            {
                ans.push_back('2');

            }
            else
                ans.push_back('1');
            i+=2;
        }
    }
    cout<<ans;
    return 0;
}
