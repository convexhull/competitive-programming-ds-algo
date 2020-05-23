#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long T;
    scanf("%lld",&T);
    while(T--)
    {
        long long n;
        scanf("%lld",&n);
        bool flag=true;
        for(long long i=2;i*i<=n;i++)
        {

            long long cnt=0;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }
            if(i%4==3)
            {
                if(cnt%2)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(n!=1)
        {
            if(n%4==3)
                flag=false;
        }
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

