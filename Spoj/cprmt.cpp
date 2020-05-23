#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a,b;
    while(cin>>a)
    {
        cin>>b;
        string ans;
        vector<int>marka(200);
        vector<int>markb(200);
        for(auto x:a)
            marka[x]++;
        for(auto x:b)
            markb[x]++;
        for(int i=96;i<=130;i++)
        {
            int t=min(marka[i],markb[i]);
            while(t--)
                ans.push_back(i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
