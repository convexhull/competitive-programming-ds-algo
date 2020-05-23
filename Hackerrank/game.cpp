#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        if(n%7==0 || n%7==1)
            cout<<"Second"<<endl;
        else 
            cout<<"First"<<endl;
    }
    return 0;
}
