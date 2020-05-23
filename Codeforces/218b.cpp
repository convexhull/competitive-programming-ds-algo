#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++)
        cin>>v[i];
    int mincost = 0, maxcost = 0;
    vector<int>mn;
    mn = v;
    int nn = n;
    while(nn-- > 0)
    {
        int maxi = -1,p = 0;
        for(int i=0;i<m;i++)
        {
            if(mn[i]>maxi)
                p = i;
            maxi = max(maxi,mn[i]);
        }
        maxcost += mn[p];
        mn[p]--;
    }
    nn = n;
    sort(v.begin(),v.end());
    int i=0;
    while(nn-- > 0)
    {
        if(v[i]<1)
            i++;
        mincost +=v[i];
        v[i]--;
    }
    cout<<maxcost<<" "<<mincost;
    return 0;
}
    

