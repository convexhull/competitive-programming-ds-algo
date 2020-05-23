#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<=n-1;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int T;
    cin>>T;
    while(T--)
    {
        int x;
        cin>>x;
        if(binary_search(v.begin(),v.end(),x))
                cout<<"Yes found!";
        else
        cout<<"Shit got real!"<<endl;
    }
    return 0;
}
