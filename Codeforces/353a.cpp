#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    int sumtop=0, sumbot = 0;
    for(int i=0;i<n;i++)
    {
        sumtop+=v[i].first;
        sumbot+=v[i].second;
    }
    int ans;
    if(sumtop%2==0 && sumbot%2==0)
        ans=0;
    else if(sumtop%2 + sumbot%2 ==1)
        ans = -1;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(v[i].first%2 + v[i].second%2 == 1)
            {
                ans = 1;
                break;
            }
            ans = -1;
        }
    }
    cout<<ans;
    return 0;
}

