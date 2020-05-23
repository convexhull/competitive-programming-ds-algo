#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    scanf("%lld",&n);
    long long v[110]={0};
    for(long long i=0;i<=n-1;i++)
        scanf("%lld",&v[i]);
    long long first[1000010],second[1000010];
    long long idxf=0;
    long long idxs=0;
    for(long long i=0;i<=n-1;i++)
    {
        for(long long j=0;j<=n-1;j++)
        {
            for(long long k=0;k<=n-1;k++)
            {
                long long a=v[i]*v[j]+v[k];
                first[idxf++]=a;
                if(v[i]==0)
                     continue;
                long long b=v[i]*(v[j]+v[k]);
                second[idxs++]=b;
            }
        }
    }
    long long sum=0;
    sort(second,second+idxs);
    for(long long i=0;i<=idxf-1;i++)
    {
        pair<long long*,long long*> p=equal_range(second,second+idxs,first[i]);
        long long dist=p.second - p.first;
        sum+=dist;
    }
    printf("%lld\n",sum) ;
    return 0;
}
