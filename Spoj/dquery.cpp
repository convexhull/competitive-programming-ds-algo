#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
vector<int>cnt(1000010);
int size=0;
int ans=1;
bool comp(pair< pair<int,int>,int > p1, pair< pair<int,int>,int > p2)
{
    if(p1.first.first/size != p2.first.first/size)
        return p1.first.first/size < p2.first.first/size;
    return p1.first.second < p2.first.second;
}
void add(int pos)
{
   if(!cnt[arr[pos]])
       ans++;
   cnt[arr[pos]]++;
}
void remove(int pos)
{
    if(cnt[arr[pos]]==1)
        ans--;
    if(cnt[arr[pos]]!=0)
        cnt[arr[pos]]--;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    arr.resize(n+1);
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int q;
    cin>>q;
    size=(int)sqrt(n);
    vector< pair< pair<int,int> , int > > query;
    for(int i=0;i<=q-1;i++)
    {
        int p,q;
        cin>>p>>q;
        query.push_back(make_pair(make_pair(p,q),i));
    }
    vector<int>result(q);
    sort(query.begin(),query.end(),comp);
    int s=query.size();
    int mo_l=1;
    int mo_r=1;
    cnt[arr[1]]=1;
    for(int i=0;i<=s-1;i++)
    {
        int l=query[i].first.first;
        int r=query[i].first.second;
        while(mo_r < r)
        {
            mo_r++;
            add(mo_r);            
        }   
        while(mo_l > l)
        {
            mo_l--;
            add(mo_l);
        }
        while(mo_l < l)
        {
            remove(mo_l);
            mo_l++;
        }      
        while(mo_r > r)
        {
            remove(mo_r);
            mo_r--;
        }
        result[query[i].second]=ans;        
    }
    for(int i=0;i<=q-1;i++)
        cout<<result[i]<<'\n';
    return 0;
}
