#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int>mod(n);
    mod[0]=v[0]%n;
    for(int i=0;i<=n-1;i++)
    {
        mod[i]=(mod[i-1]+v[i])%n;
    }
    //for(int i=0;i<=n-1;i++)
     //   cout<<mod[i]<<" ";
    //cout<<endl;
    for(int i=0;i<=n-1;i++)
    {
        if(!mod[i])
        {
            cout<<1<<" "<<i+1;
            return 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(binary_search(mod.begin()+i+1,mod.end(),mod[i]))
                {
                    cout<<i+2;
                    for(int j=i+1;j<n;j++)
                        if(mod[j]==mod[i])
                        {
                            cout<<" "<<j+1;
                            break;
                        }
                    return 0;
                }
    
    }
    return 0;
}
