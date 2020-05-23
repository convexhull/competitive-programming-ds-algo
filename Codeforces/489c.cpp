#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m,s;
    cin>>m>>s;
    int for_max=s/9;
    if(s>m*9)
    {
        cout<<-1<<" "<<-1;
        return 0;
    }
    if(s==0)
    {
        if(m!=1)
        {
            cout<<-1<<" "<<-1;
            return 0;
        }
        if(m==1)
            cout<<0<<" "<<0;
        return 0;
    }
    string ansmax="";
    for(int i=1;i<=for_max;i++)
        ansmax.push_back('9');
    for(int i=1;i<=m-for_max-1;i++)
        ansmax.push_back('0');
    if(s%9)
        ansmax.push_back('0'+s-9*for_max);
    string ansmin="";
    cout<<ansmax<<" "<<ansmin;
    return 0;
}
