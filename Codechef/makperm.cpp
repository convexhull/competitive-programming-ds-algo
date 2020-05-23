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
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++)
            cin>>v[i];
        int ans = 0;
        vector<bool>pres(n+1);
        for(int i=1;i<=n;i++)
        {
            if(v[i]<=n+1)
            pres[v[i]] = true;
        }
        for(int i=1;i<=n;i++)
            if(!pres[i])
                ans++;
        cout<<ans<<endl;
    }
	return 0;
}

