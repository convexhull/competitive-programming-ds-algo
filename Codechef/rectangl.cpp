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
        array<int,4>arr;
        for(int i=0;i<4;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        if(arr[0]==arr[1] && arr[2]==arr[3])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
    
}

