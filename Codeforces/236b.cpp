#include<bits/stdc++.h>
using namespace std;
vector<long long>nod(1000010);
vector<long long>lpf(1000010);
void precomp()
{
    lpf[1]=1;
    for(long long i=2;i<=1000000;i++)
    {
        if(!lpf[i])
        {
            for(long long j=i;j<=1000000;j+=i)
                if(!lpf[j])
                    lpf[j]=i;
        }
    }
    for(long long i=2;i<=1000000;i++)
    {
        long long num = i, cnt = 0,ans = 1, prv = lpf[i];
        while(num!=1)
        {
            if(prv!=lpf[num])
            {
                ans  = ans * (cnt+1);
                cnt = 1;
                prv = lpf[num];

            }
            else
                cnt++;
            num /= lpf[num];          
        }
        ans *=(cnt+1);
        nod[i]=ans;
    }
    nod[1]=1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long a,b,c;
    cin>>a>>b>>c;
    double t1 = clock();
    precomp();
    long long ans = 0;
    long long mod = pow(2,30);
    for(long long i=1;i<=a;i++)
    {
        for(long long j=1;j<=b;j++)
        {
            for(long long k=1;k<=c;k++)
            {
                ans = (ans+nod[i*j*k])%mod ;
            }
        }
    }
    double t2 = clock();
    cout<<(t2-t1)/CLOCKS_PER_SEC<<endl;
    cout<<ans;
    return 0;
}
