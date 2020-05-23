#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>ans;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        cnt-=x;
        cnt+=y;
        ans.push_back(cnt);
    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;
    return 0;
}
