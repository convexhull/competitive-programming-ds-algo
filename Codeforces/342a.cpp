#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>mp(10000);
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    for(int i=0;i<n;i++)
        if(v[i]!=1 && v[i]!=2 && v[i]!=4 && v[i]!=3 && v[i]!=6)
            flag=false;
    int fir=0, sec = 0, thr = 0;
    fir = mp[4];
    mp[1] -= fir;
    mp[2] -= fir;
    if(mp[1]<0 || mp[2]<0)
        flag = false;
    thr = mp[3];
    mp[1]-=thr;
    mp[6]-=thr;
    if(mp[1]<0 || mp[6]<0)
        flag=false;
    if(!(mp[1]==mp[2]&& mp[2]==mp[6]))
        flag = false;
    sec += mp[1];
    if(!flag)
        cout<<-1<<endl;
    else
    {
        for(int i=1;i<=fir;i++)
            cout<<1<<" "<<2<<" "<<4<<endl;
        for(int i=1;i<=sec;i++)
            cout<<1<<" "<<2<<" "<<6<<endl;
        for(int i=1;i<=thr;i++)
            cout<<1<<" "<<3<<" "<<6<<endl;
    }
    return 0;
}
