#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int y=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        y^=x;
    }
    if(!y)
        cout<<"bhalla";
    else
        cout<<"baahu";
    return 0;
}

