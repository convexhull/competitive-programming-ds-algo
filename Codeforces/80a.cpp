#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>v{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    if(v[find(v.begin(),v.end(),n)-v.begin()+1]==m)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
