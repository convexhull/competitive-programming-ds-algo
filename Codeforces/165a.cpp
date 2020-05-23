#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int fa=0,fb=0,fc=0,fd=0;
        for(int j=0;j<n;j++)
        {
            if(v[i].first==v[j].first)
            {
                if(v[i].second<v[j].second)
                    fa=1;
                if(v[i].second>v[j].second)
                    fb=1;
            }
            if(v[i].second==v[j].second)
            {
                if(v[i].first<v[j].first)
                    fc=1;
                if(v[i].first>v[j].first)
                    fd=1;
            }
        }   
        if(fa && fb && fc && fd)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
