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
    int f=count(v.begin(),v.end(),5);
    int five=count(v.begin(),v.end(),5)/9;
    if(5*f<45)
    {
        if(find(v.begin(),v.end(),0)!=v.end())
        {
            cout<<0;
        }
        else
            cout<<-1;
        return 0;
    }
    for(int i=1;i<=9*five;i++)
        cout<<5;
    for(int i=1;i<=n-f;i++)
    {
        if(five==0)
        {
            cout<<0;
            return 0;
        }
        cout<<0;
    }
    return 0;
}
