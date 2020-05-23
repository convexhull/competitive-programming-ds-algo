#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<=2*n;i++)
    {
        for(int j=0;j<=2*n;j+=2)
        {
            if(i<=n)
            {
                if(j<=n-i-1 || j>=n+i+1)
                    cout<<"  ";
                else
                    cout<<"# ";
            }
            else
            {
                
            }
        }
        cout<<endl;
    }
    return 0;
}
