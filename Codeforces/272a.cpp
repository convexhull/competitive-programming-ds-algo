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
    int cnt=0;
    int sum=accumulate(v.begin(),v.end(),0);
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)==1)
            cnt++;
    }
    cout<<5-cnt<<endl;
    return 0;
}
