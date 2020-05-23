#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    getline(cin,s);
    int l=s.length();
    char ch;
    for(int i=l-1; ;i--)
    {
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
        {
            ch=tolower(s[i]);
            break;
        }
    }
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
