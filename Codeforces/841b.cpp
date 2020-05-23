#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    bool flag=false;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        if(num&1)
        {
            flag=true;
            break;
        }
    }
    flag ? cout<<"First" : cout<<"Second";
    return 0;
}
