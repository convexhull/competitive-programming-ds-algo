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
    int cnt=0,cnti=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='S' && s[i+1]=='F')
            cnt++;
        if(s[i]=='F' && s[i+1]=='S')
            cnti++;
    }
    cnt>cnti ? cout<<"YES" : cout<<"NO";
    return 0;    
}

