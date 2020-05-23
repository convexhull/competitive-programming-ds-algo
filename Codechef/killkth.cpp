#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    long long l = s.length();
    vector<string>v;
    for(long long i=0;i<l;i++ )
    {
        for(long long j=1;j+i<=l;j++)
        {
            v.push_back(s.substr(i,j));
        }
    }
    sort(v.begin(),v.end());
    string master="";
    for(auto x:v)
        master.append(x);
    long long q;
    cin>>q;
    long long g = 0;
    for(long long i=1;i<=q;i++)
    {
        long long p,m;
        cin>>p>>m;
        long long k = (p*g)%m+1;
        cout<<master[k-1]<<endl;
        g+=master[k-1];
    }
    return 0;    
}

