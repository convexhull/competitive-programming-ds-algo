#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int len_chain=1;
    string continuum="Polycarp";
    for(int i=0;i<n;i++)
    {
        string a,x,b;
        cin>>a>>x>>b;
        if(b==continuum)
        {
            len_chain+=1;
            continuum=a;
        }
        else
        {
            len_chain=1;


