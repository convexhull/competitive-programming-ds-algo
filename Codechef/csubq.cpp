#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,l,r;
    cin>>n>>q>>l>>r;
    vector<long long>v(n) ;
    for(long long i=1;i<=q;i++)
    {
        long long t,x,y;
        cin>>t>>x>>y;
        if(t==1)
        {
            x-=1;
            v[x]=y;
        }
        if(t==2)
        {
            x-=1;
            y-=1;
            long long ans=0;
            vector<long long>w=v;
            for(long long j=x;j<=y;j++)
            {
                if(w[j]>r)
                {
                    w[j]= -1 ;
                }
                else 
                if(w[j]<l)
                    w[j]=-2;
            }
            long long cnt=0,poor=0;
            for(long long j=x;j<=y+1;)
            {
                if(w[j]==-1 || j==y+1)
                {
                    ans += (cnt*(cnt+1))/2;
                    cnt=0;
                    poor=0;
                }
                else if(w[j]==-2)
                {
                    long long para=0;
                    for(long long k=j;w[k]==-2;k++)
                    {
                        para++;
                        poor++;
                    }
                    ans -= (para*(para+1))/2;
                    j+=para;
                    cnt+=para;
                    continue;
                }
                else
                    cnt++;
                j++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

                
