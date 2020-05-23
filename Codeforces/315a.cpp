#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>cnt(1110);
    vector<int>relief(1110),magic(1110);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
            magic[b]=1;
        else
            relief[a]++;
        cnt[a]++;
    }
    for(int i=0;i<cnt.size();i++)
    {
        if(cnt[i]>0)
        {
            if(magic[i])
                cnt[i]=0;
            else if(relief[i]>1)
                cnt[i]=0;
            else if(relief[i]==1)
                cnt[i]=1;
        }
    }
    cout<<accumulate(cnt.begin(),cnt.end(),0);
    return 0;
}


