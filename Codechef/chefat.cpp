#include<bits/stdc++.h>
#define ld long double 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    vector<ld>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int j=1;j<=q;j++)
    {
        int t;
        cin>>t;
        if(!t)
        {
            int l,r;
            cin>>l>>r;
            l--;r--;
            ld ans =1;
            for(int i=l;i<=r;i++)
                ans *= ((ld)1.0-arr[i]);
            cout<<ans<<endl;
        }
        else
        {
            int l,r;
            ld x;
            cin>>l>>r>>x;
            l--;r--;
            for(int i=l;i<=r;i++)
                arr[i]=arr[i]*1.0*x;
        }
    }
    return 0;    
}

