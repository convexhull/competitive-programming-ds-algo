#include<bits/stdc++.h>
using namespace std;
vector<long long>roomnum;
vector<long long>sum(2000110);
vector<long long>ans(1000002);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    for(long long j = 2 ;j<=2000110;j++)
    {
        long long sumodd = 0, sumeven = 0;
        long long res;
        long long i = j;
        while(i>0)
        {
            long long dig = i%10;
            if(dig%2)
                sumodd += dig;
            else 
                sumeven += dig;
            i/=10;
        }
        res = abs(sumodd-sumeven);
        roomnum.push_back(res);
    }
    sum[1]=roomnum[0];
    for(long long i=2;i<=2000018;i++)
        sum[i] = sum[i-1] + roomnum[i-1];
    ans[1]=2;
    for(long long i=2;i<1000004;i++)
    {
        ans[i] = ans[i-1] + 2*(sum[2*i-1] - sum[i-1]) -roomnum[2*(i-1)] ;
    }
    while(T--)
    {
        long long n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}

