#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int arr[5];
    for(int i=0;i<=4;i++)
        cin>>arr[i];
    sort(arr,arr+5);
    cout<<accumulate(arr,arr+5,0)-arr[4]<<" "<<accumulate(arr,arr+5,0)-arr[0]<<endl;
    return 0;
}
