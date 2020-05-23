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
        long long n;
        cin>>n;
        vector<long long>v(n+1);
        for(long long i=1;i<=n;i++)
            cin>>v[i];
        vector<long long>psum(n+1);
        psum[1] = v[1];
        for(long long i=2;i<=n;i++)
            psum[i] = psum[i-1]+v[i];
        long long days = 0;
        if(v[1]>=n)
        {
            cout<<1<<endl;
            continue;
        }
        long long xx = 1;
        while(xx<n)
        {
            days ++;
            xx += psum[xx];
        }
        cout<<days<<endl;
    }
    return 0;
}
            
