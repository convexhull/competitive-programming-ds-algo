#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        vector<int>sub(n);
        sub[0]=v[0];
        for(int i=1;i<n;i++)
        {
            sub[i] = max(sub[i]
    
