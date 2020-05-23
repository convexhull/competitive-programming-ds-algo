#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int cnt=0,maxi=v[0],mini=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]>maxi || v[i]<mini)
        {
            cnt++;
            if(v[i]>maxi)
                maxi=v[i];
            else
                mini=v[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}

