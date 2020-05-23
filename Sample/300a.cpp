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
     vector<int>neg,pos,zero;
    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
            neg.push_back(v[i]);
        if(v[i]==0)
            zero.push_back(v[i]);
        if(v[i]>0)
            pos.push_back(v[i]);
    }
    if(neg.size()%2==0)
    {
        zero.push_back(neg[neg.size()-1]);
        neg.pop_back();
    }
    cout<<neg.size()<<" ";
    for(int i=0;i<neg.size();i++)
        cout<<neg[i]<<" ";
    cout<<endl;
    cout<<pos.size()<<" ";
    for(auto x:pos)
        cout<<x<<" ";
    cout<<endl;
    cout<<zero.size()<<" ";
    for(auto x:zero)
        cout<<x<<" ";
    return 0;
}

