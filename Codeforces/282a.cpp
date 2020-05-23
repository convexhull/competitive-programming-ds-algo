#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int cntp=0,cntm=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='+')
            {
                cntp++;
                break;
            }
            if(s[i]=='-')
            {
                cntm++;
                break;
            }
        }
    }
    cout<<cntp-cntm<<endl;
    return 0;
}
