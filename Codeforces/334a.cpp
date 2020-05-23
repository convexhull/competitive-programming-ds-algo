#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int  num=n*n/2;
    for(int i=1;i<=num;i+=(num/n))
    {
        for(int j=i;j<=i+num/n-1;j++)
        {
            cout<<j<<" "<<n*n-j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
