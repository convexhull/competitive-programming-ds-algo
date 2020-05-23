#include<bits/stdc++.h>
using namespace std;
int func(int base,int expo)
{
    int result=1;
    while(expo)
    {
        if(expo & 1)
            result*=base;
        expo>>=1;
        base*=base;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<func(a,b)<<endl;
    return 0;
}
