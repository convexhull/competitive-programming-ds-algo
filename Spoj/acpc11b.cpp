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
        int na,nb;
        cin>>na;
        vector<int>a(na);
        for(int i=0;i<=na-1;i++)
            cin>>a[i];
        cin>>nb;
        vector<int>b(nb);
        for(int i=0;i<=nb-1;i++)
            cin>>b[i];
        int mini=numeric_limits<int>::max();
        for(int i=0;i<=na-1;i++)
        {
            for(int j=0;j<=nb-1;j++)
            {
                int x=abs(a[i]-b[j]);
                mini=min(mini,x);
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}

        
