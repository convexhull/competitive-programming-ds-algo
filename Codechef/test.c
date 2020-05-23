#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int n,a,b,cofa=0,cofb=0,j;
        float fst=0,snd=0;
        scanf(" %d %d %d", &n,&a,&b); 
        int ar[10019];
        for(j=0;j<n;j++)
            scanf("%d",&ar[j]);
        for(j=0;j<n;j++)
            if(ar[j]==a)
                cofa++;
        for(j=0;j<n;j++)
            if(ar[j]==b)
                cofb++;
        fst = cofa*1.0 / n;
        snd = cofb*1.0 / n;
        printf("%f\n",fst*snd);
    }
    return 0;
}
