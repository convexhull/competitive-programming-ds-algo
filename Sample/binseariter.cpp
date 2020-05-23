#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>v(n);
    for(int i=0;i<=n-1;i++)
        cin>>v[i];
    //Iterative binary search!
    int lo=0;
    int hi=n-1;
    int idx=0;
    while(hi>=lo)
    {
        int mid=lo+(hi-lo)/2;
        if(v[mid]==x)
        {
            idx=mid;
            break;
        }
        else if(x<v[mid])
            hi=mid-1;
        else
            lo=mid+1;
    }
    if(lo>hi)
        cout<<"Element ghanta nahi mila!"<<endl;
    else
        cout<<"Element found at index: "<<idx<<endl;
    return 0;
}
