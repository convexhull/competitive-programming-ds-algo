#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0,r=0;
    int ans=-1;
    bool flag=false;
    for(int i=0;i<=s.length();i++) 
    {
        if(s[i]<97 || i==s.length() )
        {
            flag=true;
            set<int>st;
            for(int j=l;j<=i-1;j++)
            {
                st.insert(s[j]);
            }
            l=i+1;
            ans=max(ans,(int)st.size());
        }
    }
    flag ? cout<<ans : cout<<s.length();
    return 0;
}

