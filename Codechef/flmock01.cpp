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
        int n,k,cnt=0;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v[i]+=k;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]%7==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

