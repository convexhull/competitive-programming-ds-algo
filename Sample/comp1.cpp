#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<=n-1;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<=n-1;i++)
        cout<<v[i]<<" " ;
    return 0;
}
