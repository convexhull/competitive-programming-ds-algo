#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin>>k;
    vector<int>v(12);
    for(int i=0;i<12;i++)
        cin>>v[i];
    sort(v.rbegin(),v.rend());
    int cnt=0,i=0;
    while(cnt<k)
    {
        cnt+=v[i++];
    }
    i>12 ? cout<<-1 : cout<<i;
    return 0;
}
