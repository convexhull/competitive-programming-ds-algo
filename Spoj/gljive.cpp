#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int sum=0;
    int val=0;
    for(int i=0;i<=9;i++)
    {
        int n;
        cin>>n;
        sum+=n;
        if(sum>100)
        {
            val=sum-n;
            break;
        }
    }
    if(sum<=100)
        cout<<sum;
    else
        (int)abs(sum-100)>(int)abs(100-val) ? cout<<val : cout<<sum;
    return 0;
}
