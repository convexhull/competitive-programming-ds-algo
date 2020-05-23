#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(7);
    for(int i=0;i<7;i++)
        cin>>v[i];
    int sum=accumulate(v.begin(),v.end(),0);
    int left;
    n%sum==0 ? left=n-((int)n/sum-1)*sum : left=n-((int)n/sum)*sum;
    int cnt=0;
    while(left>0)
    {
        left-=v[cnt];
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
