#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,ans=0;
    cin>>n;
    string comb;
    for(int i=1;i<=n;i++)
    {
        string mag;
        cin>>mag;
        if(i==1)
        {
            comb.append(mag);
            ans+=1;
            continue;
        }
        if(*(comb.end()-1)==mag[0])
            ans+=1;
        comb.append(mag);
    }
    cout<<ans<<endl;
    return 0;
}
