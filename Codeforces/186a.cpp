#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    bool flag = true;
    if(a.length()!=b.length() || a.length()==1)
        flag = false;
    vector<int>v;
    int cnt =0;
    for(int i=0;i<a.length();i++)
    {   
        if(a[i]!=b[i])
        {
            cnt++;
            v.push_back(i);
        }
    }
    if(v.size()!=2)
        flag = false;
    else
    {
        if(!(a[v[0]] == b[v[1]] && b[v[0]] == a[v[1]]))
            flag = false;
    }
    flag ? cout<<"YES" : cout<<"NO";
    return 0;
}


