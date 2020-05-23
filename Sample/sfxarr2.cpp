#include<bits/stdc++.h>
using namespace std;
bool comp(pair< pair<int,int> , int > &p1, pair< pair<int,int> , int > &p2)
{
    if(p1.first.first==p2.first.first)
        return p1.first.second < p2.first.second ;
    return p1.first.first < p2.first.first;
}
vector< vector<int> > suffix(string &s)
{
    int n=s.length();
    vector< vector<int> >srtidx((int)log2(n)+2,vector<int>(n));
    for(int i=0;i<=n-1;i++)
        srtidx[0][i]=s[i]-'a';
    vector< pair< pair<int,int> , int > > L(n);
    for(int dt=1,cnt=1;dt<n;dt*=2,cnt++)
    {
        for(int i=0;i<=n-1;i++)
        {
            L[i].first.first=srtidx[cnt-1][i];
            L[i].first.second= i+cnt<=n-1 ? srtidx[cnt-1][i+dt] : -1 ;
            L[i].second=i;
        }
       sort(L.begin(),L.end(),comp);
       for(int i=0;i<n;i++)
       {
           srtidx[cnt][L[i].second]= i>0 && L[i].first.first==L[i-1].first.first && L[i].first.second==L[i-1].first.second ? srtidx[cnt][L[i-1].second] : i;
       }
       for(int i=0;i<=n-1;i++)
           cout<<L[i].second<<" ";
       cout<<endl;
    }
    return srtidx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    vector< vector<int> > suffixarray = suffix(s);
    for(auto x: suffixarray[2])
        cout<<x<<" ";
    return 0;
}
