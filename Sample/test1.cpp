#include<bits/stdc++.h>
#define MAX 1000000009
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=(ans*i)%MAX;
    }
    return (ans+MAX)%MAX;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
