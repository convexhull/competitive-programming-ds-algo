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
    int l,r;
    int maxnow = -1000;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int ones = count(v.begin()+i,v.begin()+j+1,1);
            int zeros = count(v.begin()+i,v.begin()+j+1,0);
            if(zeros-ones > maxnow )
            {
                maxnow = zeros - ones;
                l = i;
                r = j;
            }
        }
    }
    for(int i=l;i<=r;i++)
        v[i] = !v[i];
    cout<<accumulate(v.begin(),v.end(),0);
    return 0;
}
