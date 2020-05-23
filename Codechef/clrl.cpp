#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long n,rz;
        cin>>n>>rz;
        vector<long long>rating(n);
        for(long long i=0;i<n;i++)
            cin>>rating[i];
        bool flag = true;
        long long mx = numeric_limits<long long>::max() , mn = numeric_limits<long long>::min();
        for(long long i=1;i<n;i++)
        {
            if(rating[i]<rating[i-1])
            {
                if(mx == -1)
                {
                    mx = rating[i-1];
                }
                if(rating[i] < mn )
                    flag=false;
                mx = rating[i-1];
            }
            else
            {
                if(mn == -1)
                {
                    mn = rating[i-1];
                }
                if(rating[i] > mx )
                    flag=false;
                mn = rating[i-1];
            }
        }
        flag ? cout<<"YES" : cout<<"NO";
        cout<<endl;
    }
    return 0;
}

