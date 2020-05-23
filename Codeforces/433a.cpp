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
    int sum = accumulate(v.begin(),v.end(),0);
    sum/=2;
    int cnt = count(v.begin(),v.end(),100);
    if(sum%200 == 0)
        cout<<"YES"<<endl;
    else
    {
        if(sum%100==0)
        {
            if(cnt>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

