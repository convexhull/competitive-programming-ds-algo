#include<bits/stdc++.h>
using namespace std;
bool algo(pair<int,int>p1, pair<int,int>p2)
{
    if(p1.first==p2.first)
        return p1.second>p2.second ;
    return p1.first<p2.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int s,n;
    cin>>s>>n;
    vector< pair<int,int> > v;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),algo);
    for(int i=0;i<n;i++)
    {
        if(v[i].first>=s)
        {
            cout<<"NO";
            return 0;
        }
        s+=v[i].second;
    }
    cout<<"YES";
    return 0;
}
