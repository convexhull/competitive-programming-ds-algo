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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int idx = -1;
        for(int i=1;i<=n;i++)
        {
            bool flag = true;
            for(int j=1;j<=n;j++)
            {
                if(i!=j)
                {
                    if(__gcd(a[i],a[j])!=1)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag)
            {
                idx = i;
                break;
            }
        }
        if(idx!=-1)
        {
            cout<<0<<endl;
            for(int i=1;i<=n;i++)
                cout<<a[i]<<" ";
        }
        else
        {
            cout<<1<<endl;
            cout<<47<<" ";
            for(int i=2;i<=n;i++)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}

