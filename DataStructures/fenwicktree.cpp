#include<bits/stdc++.h>
using namespace std;
vector<int>fen;
int n;
void update(int idx,int val)
{
    while(idx<=n)
    {
        fen[idx]+=val;
        idx+=(idx & -idx);
    }
}
int query(int idx)
{
    int ans =0;
    while(idx>0)
    {
        ans +=fen[idx];
        idx-=(idx & -idx);
    }
    return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    fen.resize(n+1);
    for(int i=1;i<=n;i++)
        update(i,v[i-1]);
    for(auto x:fen)
        cout<<x<<" ";
    cout<<endl;
    int Q;
    cin>>Q;
    while(Q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<query(r)-query(l-1)<<endl;
    }	
	return 0;
}

