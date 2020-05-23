//Changes:
//Setprecision(4)//fixed
//long long->long long//fast_io
//*1.0
#include<bits/stdc++.h>
#define ld double
using namespace std;
int main()
{
    long long T;
    cin>>T;
    while(T--)
    {
        long long n,s,y;
        cin>>n>>s>>y;
        vector<long long>v(n),d(n),c(n);
        vector<ld>p(n);
        for(long long i=0;i<n;i++)
            cin>>v[i];
        for(long long i=0;i<n;i++)
            cin>>d[i];
        for(long long i=0;i<n;i++)
            cin>>p[i];
        for(long long i=0;i<n;i++)
            cin>>c[i];
        ld ans = 0;
        for(long long i=0;i<n;i++)
        {
        	ld t = ans;
            if(d[i]==1)
            {
                if(p[i]>c[i])
                {
                    ld tchef = ((ld)y)/s;
                    ans += tchef;
                }
                else if(p[i]<=c[i] && p[i]>=0)//!!
                {
                    ld tchef = ((ld)y)/s;
                    ld tdep = ((c[i]-p[i])/v[i]);
                    ans += (tdep + tchef);
                }
                else
                {
                    ld tchef = ((ld)y)/s;
                    ld tarr = (-p[i])/v[i];
                    if(tchef+(0.000001/s) < tarr)
                    	ans += tchef;
                    else
             			ans += ( ((c[i]-p[i]))/v[i] + tchef );
             	}
             }
             if(d[i]==0)
             {
             	if(p[i]< -c[i])
                {
                    ld tchef = ((ld)y)/s;
                    ans += tchef;
                }
                else if(-p[i] <= c[i] && p[i]<=0)//!!
                {
                    ld tchef = ((ld)y)/s;
                    ld tdep = ((c[i]+p[i])/v[i]);
                    ans += (tdep + tchef);
                }
                else
                {
                    ld tchef = ((ld)y)/s;
                    ld tarr = (p[i])/v[i];
                    if(tchef+(0.000001/s)  < tarr)//!!
                    	ans += tchef;
                    else
             			ans += ( ((c[i]+p[i]))/v[i] + tchef );
             	}
             }
             ld timediff  = ans-t;
             for(long long j=i+1;j<n;j++)
             {
                if(d[j]==1)
                    p[j] = p[j] + v[j]*timediff;
                if(d[j]==0)
                    p[j] = p[j] - v[j]*timediff;
             }
         }
         cout<<ans<<'\n';
     }
     return 0;
 }
