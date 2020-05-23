#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int c;
    int mini=(int)1e9;
    for( int i=0;i<n;i++)
    {
        if(v[i]<mini)
        {
            mini=v[i];
            c=i;
        }
    }
    if(count(v.begin(),v.end(),mini)>1)
        cout<<"Still Rozdil";
    else
        cout<<c+1;
    return 0;
}


