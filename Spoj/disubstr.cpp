#include<bits/stdc++.h>
using namespace std;
vector<int>sfxarr;
vector<int>lcparr;
vector< vector<int> > sortidx;
bool comp(pair< pair<int,int>,int > p1, pair< pair<int,int>,int> p2)
{
    if(p1.first.first==p2.first.first)
        return p1.first.second<p2.first.second;
    return p1.first.first<p2.first.first;
}
void suffix(string &s)
{
    int n=s.length();
    sortidx.resize((int)ceil(log2(n))+1);
    for(int i=0;i<=(int)ceil(log2(n));i++)
        sortidx[i].resize(n);
    for(int i=0;i<=n-1;i++)
        sortidx[0][i]=s[i];
    vector< pair< pair<int,int> , int > > tpl(n);
    int dt,cnt;
    for(dt=1,cnt=1;dt<n;dt*=2,cnt++)
    {
        for(int i=0;i<n;i++)
        {
            tpl[i].first.first=sortidx[cnt-1][i];
            tpl[i].first.second= (i+dt<n ? sortidx[cnt-1][i+dt] : -1);
            tpl[i].second=i;
        }
        sort(tpl.begin(),tpl.end(),comp);
        for(int i=0;i<n;i++)
        {
            sortidx[cnt][tpl[i].second]=i>0 && tpl[i].first.first==tpl[i-1].first.first && tpl[i].first.second==tpl[i-1].first.second ? sortidx[cnt][tpl[i-1].second] : i;
        }
    }
    sfxarr.resize(n);
    for(int i=0;i<n;i++)
        sfxarr[sortidx[cnt-1][i]]=i;
}
int prefix(string &s,int x, int y)
{
    int k,ans=0,n=s.length();
    for(k=ceil(log2(n));k>=0 && x<n && y<n;k--)
    {
        if(sortidx[k][x]==sortidx[k][y])
        {
            ans+= 1<<k;
            x+= 1<<k;
            y+= 1<<k;
        }
    }
    return ans;
}
int substrings(string &s)
{
    int n=s.length();
    int ans=n-sfxarr[0];
    for(int i=1;i<n;i++)
    {
        ans+=(s.length()-sfxarr[i]-lcparr[i-1]);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int n=s.length();
        suffix(s);
        lcparr.resize(n-1);
        for(int i=0;i<n-1;i++)
            lcparr[i]=prefix(s,sfxarr[i],sfxarr[i+1]);
        cout<<substrings(s)<<endl;
        sfxarr.clear();
        lcparr.clear();
        sortidx.clear();
    }
    return 0;
}
