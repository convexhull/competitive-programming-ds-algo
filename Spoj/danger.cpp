#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x,y,z;
    while(1)
    {
        string s;
        cin>>s;
        x=(int)(s[0]-'0');
        y=(int)(s[1]-'0');
        z=(int)(s[3]-'0');
        if(!x && !y && !z)
            break;
        int num=y*(int)pow(10,z)+x*(int)pow(10,z+1);
        int t=log2(num);
        int p=(int)pow(2,t);
        int m=num-p;
        cout<<2*m+1<<endl;
    }
    return 0;
}
