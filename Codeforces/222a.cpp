#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    k-=1;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    bool flag = true;
    for(int i=k;i<n;i++)
        if(v[i]!=v[k])
            flag =false;
    int p = -1;
    for(int i=k;i>=0;i--)
    {
        if(v[i]!=v[k])
        {
            p=i;
            break;
        }
    }
    flag ? cout<< p+1 : cout<<-1;
    return 0;
}

