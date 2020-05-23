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
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(n<=2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int dx = v[1]-v[0];
        int inv = 0;
        for(int i=2;i<n;)
        {
            if( (v[i]-v[i-1]) * dx < 0)
            {
                inv++;
                if(i+1<n)
                    dx = v[i+1]-v[i];
                i+=2;
                continue;
            }
            i++;
        }
        cout<<inv<<endl;
        cout<< (inv < 2 ? "YES" : "NO") <<endl;
    }
	return 0;
}

