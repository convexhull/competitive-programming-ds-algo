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
        int acc = accumulate(v.begin(),v.end(),0ll);
        int sumodd = 0, sumeven = 0;
        for(int i=0;i<n;i++)
            i%2 ? sumodd += v[i] : sumeven += v[i];
        if(sumeven-sumodd >= k)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
	return 0;
}

