#include<bits/stdc++.h>
using namespace std;
bool comp(pair< int,int> p1, pair<int,int>p2)
{
    if(p1.first == p2.first)
        return p1.second < p2.second;
    else
        return p1.first > p2.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector< pair<int,int> > pt;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        pt.push_back(make_pair(a,b));
    }
    sort(pt.begin(),pt.end(),comp);
    map< pair<int,int>, int > mp;
    for(auto x:pt)
        mp[x]++;
    cout<<mp[pt[k-1]];
    return 0;
}

