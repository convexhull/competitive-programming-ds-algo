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
    if(accumulate(v.begin(),v.end(),0)%n)
        cout<<n-1;
    else
        cout<<n;
    return 0;
}

