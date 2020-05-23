#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,m;
    cin>>n>>k>>m;
    vector<int>v(n),mod;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        mod.push_back(v[i]%m);
    vector<int>cnt(100010);
    for(auto x:mod)
        cnt[x]++;
    bool flag=false;
    int p;
    for(int i=0;i<100010;i++)
    {
        if(cnt[i]>=k)
        {
            flag=true;
            p=i;
        }
    }
    if(!flag)
        cout<<"No";
    else
    {
        cout<<"Yes"<<endl;
        int t=0;
        for(int i=0;i<n&&t<k;i++)
        {
            if(mod[i]==p)
            {
                cout<<v[i]<<" ";
                t++;
            }
        }
    }
    return 0;
}
