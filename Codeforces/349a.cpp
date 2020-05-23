#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(105);
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==25)
            v[x]++;
        else if(x==50)
        {
            if(v[25])
                v[25]--;
            else
            {
                flag=false;
                break;
            }
            v[50]++;
        }
        else
        {
            if(v[50] && v[25]) 
            {
                v[50]--;
                v[25]--;
            }
            else if(v[25]>=3)
            {
                v[25]-=3;
            }
            else
            {
                flag=false;
                break;
            }
        }
    }
    flag ? cout<<"YES" : cout<<"NO";
    return 0;
}

