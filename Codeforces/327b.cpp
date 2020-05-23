#include<bits/stdc++.h>
using namespace std;
vector<int>num(10000001);
vector<int>primes;
void sieve()
{
    for(int i=2;i<=10000000;i++)
        num[i]=i;
    for(int i=2;i*i<=10000000;i++)
    {
        if(num[i]!=-1)
        {
            for(int j=2*i;j<=10000000;j+=i)
            {
                num[j]=-1;
            }
        }
    }
    for(int i=2;i<=10000000;i++)
        if(num[i]!=-1)
            primes.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    sieve();
    for(int i=0;i<=n-1;i++)
        cout<<primes[i]<<" ";
    return 0;

}
