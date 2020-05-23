#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin>>k;
    string s,ans;
    cin>>s;
    vector<int>cnt(27);
    for(auto x:s)
        cnt[x-'a']++;
    for(int i=0;i<=26;i++)
    {
        if(cnt[i]%k)
        {
            cout<<-1;
            return 0;
        }
        cnt[i]/=k;
    }
    for(int i=0;i<=26;i++)
    {
        while(cnt[i]--)
        {
            ans.push_back((char)(i+'a'));
        }
    }
    while(k--)
        cout<<ans;
    return 0;
}

