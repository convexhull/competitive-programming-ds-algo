#include<bits/stdc++.h>
using namespace std;
int pred(vector<int> &v, int dist)
{
    int cnt=1;
    int l=v.size();
    int sum=0;
    for(int i=0;i<=l-1;) 
    {
       for(int j=i;j<=l-1;j++)
       {
           sum=v[j]-v[i];
           if(sum>=dist)
           {
               cnt++;
               i=j;
               break;
           }
           if(j==l-1)
               i=l;
       }
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n,c;
        cin>>n>>c;
        vector<int>v(n);
        for(int i=0;i<=n-1;i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        int lo=1;
        int hi=1000000000;
      //  cout<<pred(v,c)<<endl;
        while(hi>lo)
        {
            //cout<<"yo"<<endl;
            int mid=lo+(hi-lo+1)/2;
            int result=pred(v,mid);
            if(result>=c)
                lo=mid;
            else
                hi=mid-1;              
        }
        cout<<lo<<endl;
    }
    return 0;
}
