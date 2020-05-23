#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    string ans;
    s = "@"+s;
    int cnt = 1;
    for(int i=1;s[i]>0;i++)
    {
        if(s[i]==s[i-1])
        {
            if(cnt<2)
            {
                ans.push_back(s[i]);
                cnt++;
            }
        }
        else
        {
            ans.push_back(s[i]);
            cnt=1;
        }
    }
    s=ans;
    int l = s.length();
    if(l>=4)
    for(int i=0;s[i+3]>0;i++)
    {
        if(s[i]==s[i+1]&& s[i+2]==s[i+3])
            s[i+3]='\0';
    }
    for(auto x:s)
        if(x!=0)
            cout<<x;
    return 0;
}
