#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>l(n),r(n);
    for(int i=0;i<n;i++)
        cin>>l[i]>>r[i];
    bool flag = false;
    int mn = *min_element(l.begin(),l.end());
    int mx = *max_element(r.begin(),r.end());
    int p;
    for(int i=0;i<n;i++)
    {
        if(l[i]<=mn && r[i]>=mx)
        {
            p=i+1;
            flag = true;
            break;
        }
    }
    flag ? cout<<p : cout<<-1;
    return 0;
}

