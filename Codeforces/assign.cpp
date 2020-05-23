#include<bits/stdc++.h>
using namespace std;
long long h1(string &s,long long n)
{
    for(long long i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i] = 97 + (s[i]-65);
    }
    long long sum = 0;
    for(auto x:s)
        sum += x;
    return sum%n;
}
long long h2(string &s, long long n)
{
    for(long long i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i] = 97 + (s[i]-65);
    }
    long long sum = 0;
    for(auto x : s)
        sum += (x%13);
    return sum%n;
}
int main()
{
	long long n,w,T;
    cin>>n>>w;
    vector<string>site(w);
    for(long long i=0;i<w;i++)
        cin>>site[i];
    vector<long long>v(n);
    for(long long i=0;i<w;i++)
        v[h1(site[i],n)] = v[h2(site[i],n)] = 1;
    cin>>T;
    cout<<endl;
    while(T--)
    {
        string check;
        cin>>check;
        if(v[h1(check,n)] && v[h2(check,n)])
            cout<<"May be"<<endl;
        else
            cout<<"Definitely not"<<endl;
    }
	return 0;
}




/*
20
7
az.com
mani.com
suri.com
weblink.org
movie.net
serial.ind
queen.weebly.com
4
Mani.com
Pakistansongs.com
MoVIE.Net
WeeBly.Com
*/