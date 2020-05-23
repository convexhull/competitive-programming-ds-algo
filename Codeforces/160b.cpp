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
    vector<int>fir,sec;
    for(int i=0;i<n;i++)
        fir.push_back(s[i]-'0');
    for(int i=n;i<2*n;i++)
        sec.push_back(s[i]-'0');
    sort(fir.begin(),fir.end());
    sort(sec.begin(),sec.end());
    bool flag1 = false, flag2 = false;
    for(int i=0;i<n;i++)
    {
        if(fir[i]>=sec[i])
            break;
        if(i==n-1)
            flag1 = true;
    }
    for(int i=0;i<n;i++)
    {
        if(fir[i]<=sec[i])
            break;
        if(i==n-1)
            flag2=true;
    }
    flag1 || flag2 ? cout<<"YES" : cout<<"NO";
    return 0;    
}

