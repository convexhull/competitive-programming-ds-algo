#include<bits/stdc++.h>
int main()
{
    int t,i,count=1;
    scanf("%d",&t);
    while(t--)
    {
        long long int num,sum=0,coke=0;
        scanf("%lld",&num);
        long long int arr[num];
        for(i=0;i<num;i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
            if(sum<0)
            {
                coke+=fabs(sum);
                sum=0;
            }
        }
        
        printf("Scenario #%d: %lld\n",count,coke+1);
        count+=1;
        
    }
    return 0;
}
