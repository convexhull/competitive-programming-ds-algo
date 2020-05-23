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
    int mini=numeric_limits<int>::max();
    int idx=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=mini)
        {
            idx=i;
            mini=v[i];
        }
    }
    vector<int>arr;
    for(int i=1;i<=n;i++)
    {
        arr.push_back(v[(idx+i-1)%n]);
    }
    sort(v.begin(),v.end());
    if(v!=arr)
        cout<<-1;
    else
        cout<<(n-idx)%n;
    return 0;

}

