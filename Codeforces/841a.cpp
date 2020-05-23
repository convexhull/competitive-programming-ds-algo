#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,flag=1;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>cnt(200);
    for(auto ch:s)
        cnt[ch-'A']++;
    for(auto x:cnt)
        if(x>k)
        {
            flag=0;
            break;
        }
    !flag ? cout<<"NO" : cout<<"YES";
    return 0;
}
