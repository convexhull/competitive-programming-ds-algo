#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>f(n),s(m);
    for(int i=0;i<n;i++)
        cin>>f[i];
    for(int j=0;j<m;j++)
        cin>>s[j];
    sort(f.begin(),f.end());
    sort(s.begin(),s.end());
    bool o=false,t=false;
    if(f[0]==s[0])
    {
        cout<<f[0];
    }
    else
    {
        if(f[0]<s[0])
        {
            cout<<f[0];
            cout<<s[0];
        }
        else
        {
            cout<<s[0]<<f[0];
        }
    }
    return 0;
}
