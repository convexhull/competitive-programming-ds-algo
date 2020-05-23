#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector< pair<int,int> > v;
        for(int i=0;i<=n-1;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(make_pair(b,a));
        }
        sort(v.begin(),v.end());
        int ans=0;
        int endtime=-1;
        for(int i=0;i<=n-1;i++)
        {
            if(v[i].second>=endtime)
            {
                ans+=1;
                endtime=v[i].first;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
            
