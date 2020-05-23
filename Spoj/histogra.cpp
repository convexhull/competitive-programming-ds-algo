#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    while(1)
    {
        cin>>n;
        if(!n)
            break;
         vector<long long>height(n);
         for(long long i=0;i<=n-1;i++)
             cin>>height[i];
         stack<long long>s;
         long long max_area=numeric_limits<long long>::min();
         for(long long i=0;i<=n-1;i++)
         {
             if(s.empty() || height[i]>=height[s.top()])
             {
                 s.push(i);
                 continue;
             }
             while(!s.empty() && height[i]<height[s.top()])
             {
                 long long t=s.top();
                 s.pop();
                 long long area=height[t]* (!s.empty() ? i-s.top()-1 : i);
                 max_area=max(max_area,area);
             }
             s.push(i);
         }
         long long p=s.top();
         while(!s.empty())
         {
             long long t=s.top();
             s.pop();
             long long area=height[t]* (!s.empty() ? p-s.top() : p+1);
             max_area=max(area,max_area);
         }
         cout<<max_area<<endl;
    }
    return 0;

}
//3 2 1 1 
