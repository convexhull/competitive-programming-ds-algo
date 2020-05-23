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
    vector<int>neg,pos,zer;
    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
            neg.push_back(v[i]);
        if(v[i]==0)
            zer.push_back(v[i]);
        if(v[i]>0)
            pos.push_back(v[i]);
    }
    if(!pos.size())
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size()%2==0)
    {
        zer.push_back(neg.back());
        neg.pop_back();
    }
    cout<<neg.size()<<" ";
    for(auto x:neg)
        cout<<x<<" ";
    cout<<endl;
    cout<<pos.size()<<" ";
    for(auto x:pos)
        cout<<x<<" ";
    cout<<endl;
    cout<<zer.size()<<" ";
    for(auto x:zer)
        cout<<x<<" ";
    return 0;
}
