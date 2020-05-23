#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
void sieve()
{
    vector<int>num(1000010);
    for(int i=2;i*i<=1000000;i++)
    {
        if(!num[i])
        {
            for(int j=2*i;j<=1000000;j+=i)
                num[j]=-1;
        }
    }
    for(int i=2;i<=1000000;i++)
    {
        if(num[i]!=-1)
            primes.push_back(i);
    }
}
int ans(int x)
{
    int res=1;
    int l=primes.size();
    int p=x;
    for(int i=0;primes[i]<1000;i++)
    {
    	int cnt=0;
    	while(p%primes[i]==0)
    	{
    		cnt++;
    		p/=primes[i];
    	}
    	res *= (cnt+1);
    }
    if(p==x)
        res*=2;
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        int cd=__gcd(a,b);
        cout<<ans(cd)<<'\n';
        //cout<<primes.size()<<endl;
        	
    }
    return 0;
}

