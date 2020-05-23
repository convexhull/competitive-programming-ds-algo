#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    long long v1,v2,t1,t2;
    cin>>v1>>v2>>t1>>t2;
    long long fir=n*v1+2*t1;
    long long sec=n*v2+2*t2;
    if(fir>sec)
        cout<<"Second";
    else if(fir==sec)
        cout<<"Friendship";
    else
        cout<<"First";
    return 0;
}
