#include<stdio.h>
int main()
{
    long long n,flag=0,sum=0;
    scanf("%l64",&n);
    for(long long i=1;i<=n;i++)
    {
        long long x;
        scanf("%l64",&x);
        if(x%2)
            flag=1;
    }
    if(flag)
        printf("First");
    else
        printf("Second");
    return 0;
}
