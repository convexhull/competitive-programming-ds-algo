#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    vector<bool>vis(n);
    for(long long i=0;i<n;i++)
    {
        if(!vis[i])
        {
            long long maxi=-1;
            for(long long j=i;j<n;j++)
            {
                if(!vis[j] && v[j]>maxi )
                {
                    vis[j]=true;
                    maxi=v[j];
                    cout<<v[j]<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

