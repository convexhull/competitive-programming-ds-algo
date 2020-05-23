#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,a,b;
    cin>>n>>a>>b;
    long long t = b;
    bool flag = false;
    if(a>b)
    {
        flag = true;
        swap(a,b);
    }
    long long ansa = a,ansb = b;
    if(6*n <= a*b)
    {
        cout<<a*b<<endl;
        flag ? cout<<b<<" "<<a : cout<<a<<" "<<b;
    }
    else
    {
        long long ar = (long long)ceil(sqrt(6*n));
        long long area = 1e10,newarea = 0;
        for(long long i=a;i<=ar;i++)
        {
            long long newb = (long long)ceil((6*n*1.0)/i);
            if(newb<b)
                continue;
            newarea = i*newb;
            if(newarea<=area)
            {
                ansa = i;
                ansb = newb;
                area = newarea;
            }
        }
        cout<<ansa*ansb<<endl;
        flag ? cout<<max(ansa,ansb)<<" "<<min(ansa,ansb) : cout<<min(ansa,ansb)<<" "<<max(ansa,ansb) ;
    }
    return 0;
}

