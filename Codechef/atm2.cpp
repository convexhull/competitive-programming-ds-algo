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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        string ans;
        for(int i=0;i<n;i++)
        {
            if(k>=v[i])
            {
                k-=v[i];
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        cout<<ans<<endl;
    }            
	return 0;
}

