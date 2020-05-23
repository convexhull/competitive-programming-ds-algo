#include<bits/stdc++.h>
using namespace std;
long long sumdig(int x)
{
    long long sum = 0;
    while(x>0)
    {
        sum += (x%10);
        x/=10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long a,b,c;
    cin>>a>>b>>c;
    vector<long long>ans;
    for(long long s = 1;s<=81;s++)
    {
        long long num = b*(pow(s,a))+c;
        if(num<1e9 && num>0 && sumdig(num)==s)
            ans.push_back(num);
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)
        cout<<x<<" ";
    return 0;
}
