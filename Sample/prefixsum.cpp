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
    vector<int>sum(n);
    sum[0]=v[0];
    for(int i=1;i<n;i++)
        sum[i]=sum[i-1]+v[i];
    int f,s;
    cin>>f>>s;
    //f>0 ? cout<<sum[s]-sum[f-1] : cout<<sum[s];
    cout<<accumulate(v.begin()+f,v.begin()+s+1,0);
    return 0;
    
}

