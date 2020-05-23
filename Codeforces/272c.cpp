#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    long long m;
    cin>>m;
    vector<pair<long long,long long> > box(m);
    for(long long i=0;i<m;i++)
        cin>>box[i].first>>box[i].second;
    long long gross_ht = 0;
    vector<long long>ht(m);
    for(long long i=0;i<m;i++)
    {
        ht[i] = max(gross_ht,v[box[i].first-1]);
        gross_ht = (ht[i]+box[i].second);
    }
    for(auto x:ht)
        cout<<x<<endl;
    return 0;
       
}

