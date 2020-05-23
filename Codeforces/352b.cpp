#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector< vector<int> > v(100001);
    for(int i=0;i<n;i++)
    {
        v[a[i]].push_back(i);
    }
    int cnt = 0;
    vector< pair<int,int> > ans;
    for(int i=0;i<100001;i++)
    {
        if(v[i].empty())
            continue;
        int d = (v[i].size()>1 ? v[i][1]-v[i][0] : 0 );
        bool flag = true;
        for(int j=1;j<v[i].size();j++)
        {
            if(v[i][j]-v[i][j-1] != d)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cnt++;
            ans.push_back(make_pair(i,d));
        }
    }
    cout<<cnt<<endl;
    for(auto x:ans)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}

