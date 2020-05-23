#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector< pair<int,int> > v(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v[i].first=a;
        v[i].second = b;
    }
    if(n==1)
    {
        v[0].first<v[0].second ? cout<<"A" : cout<<"G";
    }
    else
    {
        string ans;
        ans.push_back('A');
        int fsum = v[0].first;
        int ssum = 0;
        for(int i=1;i<n;i++)
        {
            if(abs(fsum+v[i].first - ssum )<=500)
            {
                fsum+=v[i].first;
                ans.push_back('A');
            }
            else
            {
                ssum += v[i].second;
                ans.push_back('G');
            }
        }
        cout<<ans;
    }
    return 0;    
}

