#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>tree;
void build(int node,int lo, int hi)
{
	if(lo == hi)
	{
		tree[node] = v[lo];
		return ;
	}
	int mid= (lo+hi)/2;
	build(2*node,lo,mid);
	build(2*node+1,mid+1,hi);
	tree[node] = min(tree[node*2] , tree[node*2+1] );
}
void update(int node, int lo,int hi, int idx, int val)
{	
	if(lo == hi)
	{
		tree[node] +=val;
		return ;
	}
	int mid= (lo+hi)/2;
	if( idx>=lo && idx<=mid)
		update(node*2,lo,mid,idx,val);
	else
		update(node*2+1,mid+1,hi,idx,val);
	tree[node] = min(tree[node*2] , tree[node*2+1] );
	return ;
}
int query(int node, int lo, int hi, int l, int r)
{
	if(lo>r || hi<l)
		return numeric_limits<int>::max();
	if(lo>=l && hi<=r)
		return tree[node];
	int mid= (lo+hi)/2;
	return min( query(node*2,lo,mid,l,r) , query(node*2+1,mid+1,hi,l,r) );
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	v.resize(n);
	tree.resize(4*n+10);
	for(int i=0;i<=n-1;i++)
		cin>>v[i];
	build(1,0,n-1);
	int q;
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int a;
		cin>>a;
		if(a)
		{
			int l,r;
			cin>>l>>r;
			cout<<query(1,0,n-1,l-1,r-1)<<endl;
		}
		else
		{
			int x,v;
			cin>>x>>v;
			update(1,0,n-1,x-1,v);
		}
	}
	return 0;
}