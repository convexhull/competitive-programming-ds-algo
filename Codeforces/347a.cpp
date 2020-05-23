#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int lo = min_element(v.begin(),v.end())-v.begin();
   
    swap(v[n-1],v[lo]);
    int hi = max_element(v.begin(),v.end())-v.begin();
    if(v[0]!= *max_element(v.begin(),v.end()))
        swap(v[0],v[hi]);
    sort(v.begin()+1,v.end()-1);
    for(auto x:v)
        cout<<x<<" ";
    return 0;
}

