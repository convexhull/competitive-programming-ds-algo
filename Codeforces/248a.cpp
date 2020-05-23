#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int ansl=0, ansr=0;
    for(int i=1;i<=n;i++)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)
            ansl++;
        if(r==0)
            ansr++;
    }
    cout<<min(ansl,n-ansl)+min(ansr,n-ansr)<<endl;
    return 0;
}
