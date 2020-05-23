#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
    cin>>n>>q;
    vector<int>row(n+2),col(n+2);
    for(int i=1;i<=q;i++)
    {
        string s;
        cin>>s;
        if(s=="RowAdd")
        {
            int r,x;
            cin>>r>>x;
            row[r] += x;
        }
        else
        {
            int c,x;
            cin>>c>>x;
            col[c] += x;
        }
    }
    vector< vector<int> > grid(n+2,vector<int>(m+2));
    for(int i=1;i<=n;i++)
    {
        



	return 0;
}

