#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        string n;
        cin>>n;
        string ans;
        vector<int>v(100);
        for(auto x:n)
            v[x-'0']++;
        for(int i=65;i<91;i++)
        {
            int a=i/10;
            int b=i%10;
            if(a!=b)
            {
                if(v[a]>0 && v[b]>0 )
                    ans.push_back(char(10*a+b));
            }
            else
                if(v[a]>1)
                {
                    ans.push_back(char(11*a));
                }
        }
        cout<<ans<<endl;
    }
    return 0;
}
