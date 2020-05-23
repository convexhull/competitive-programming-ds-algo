#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    int ans = 1;
    for(int i=1;i<=x;i++)
        ans*=i;
    return ans;
}
int comb(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    int delx = 0;
    for(int i=0;s1[i]>0;i++)
        if(s1[i]=='+')
            delx++;
        else
            delx--;
    int del2x=0;
    for(int i=0;s2[i]>0;i++)
        if(s2[i]=='+')
            del2x++;
        else if(s2[i]=='-')
            del2x--;
    int unrec = count(s2.begin(),s2.end(),'?');
    bool flag = true;
    if((delx+unrec-del2x)%2)
        flag = false;
    if(unrec==0)
    {
        if(delx==del2x)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        return 0;
    }
    long double num = comb(unrec,(delx+unrec-del2x)/2);
    long double den = pow(2,unrec);
    flag?cout<<fixed<<setprecision(10)<<num/den:cout<<0.0;
    return 0;
}
    
