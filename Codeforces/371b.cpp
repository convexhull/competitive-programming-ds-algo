#include<bits/stdc++.h>
using namespace std;
bool flag = true;
int rec(int a, int b)
{
    if(a==b)
        return 0;
    else
    {
        int mx = max(a,b);
        if(mx%2==0)
            return 1+rec(mx/2,min(a,b));
        else if(mx%3==0)
            return 1+rec(mx/3,min(a,b));
        else if(mx%5==0)
            return 1+rec(mx/5,min(a,b));
        else
            flag = false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    int ans = rec(a,b);
    flag ? cout<<ans : cout<<-1;
    return 0;
    
}

