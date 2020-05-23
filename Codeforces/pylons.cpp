#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>h(n+1);
    for(int i=1;i<=n;i++)
        cin>>h[i];
    int life=0,cost=0;
    for(int i=0;i<=n-1;i++)
    {
        if(h[i+1]>=h[i])
        {
            if(life-(h[i+1]-h[i])>=0)
                life-=(h[i+1]-h[i]);
            else
            {
                cost+=(h[i+1]-h[i]-life);
                life=0;
            }
        }
        else
        {
            life-=(h[i+1]-h[i]);
        }
    }
    cout<<cost<<endl;
    return 0;
}
