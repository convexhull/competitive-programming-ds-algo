#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
stack<int>s;
void precomp(vector<int> &v)
{
    int l=v.size();
    ans[0]=-1;
    s.push(v[0]);
    for(int i=1;i<=l-1;i++)
    {
        if(v[i]<=s.top())
        {
            ans[i]=s.top();
            s.push(v[i]);
            continue;
        }
            while(!s.empty())
            {
                s.pop();
                if(s.empty())
                {
                    ans[i]=-1;
                    break;
                }
                if(s.top()>=v[i])
                    break;
            }
            if(!s.empty())
                ans[i]=s.top();
            s.push(v[i]);
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    ans.resize(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    precomp(v);
    while(q--)
    {
        int x;
        cin>>x;
        cout<<ans[x-1]<<'\n';
    }
    return 0;
}


