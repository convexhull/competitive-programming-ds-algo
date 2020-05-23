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
    while(1)
    {
    int x;
    cin>>x;
    cout<<lower_bound(v.begin(),v.end(),x)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),x)-v.begin()<<endl;
    }
    return 0;
}
