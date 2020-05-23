#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
vector<long long>tree;
void build(long long node, long long lo, long long hi)
{
	if(lo == hi)
	{
		tree[node]=v[lo];
		return ;
	}
	long long  mid= (lo+hi)/2;
	build(node*2,lo,mid);
	build(node*2+1,mid+1,hi);
	tree[node] = tree[node*2] + tree[node*2+1];
}
void update(long long node, long long lo, long long hi, long long l, long long r, long long val)
{	
	if(l>hi || r<lo)
		return ;
	if(lo == hi)
	{
		tree[node] +=val;
		return ;
	}
	long long mid= (lo+hi)/2;
	update(node*2,lo,mid,l,r,val);
	update(node*2+1,mid+1,hi,l,r,val);
	tree[node] = tree[node*2] + tree[node*2+1];
}
long long query(long long node, long long lo, long long hi, long long l, long long r)
{
	if(lo>r || hi<l)
		return 0;
	if(lo>=l && hi<=r)
		return tree[node];
	long long mid= (lo+hi)/2;
	return query(node*2,lo,mid,l,r) + query(node*2+1,mid+1,hi,l,r);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin>>n;
	v.resize(n);
	tree.resize(4*n+10);
	for(long long i=0;i<=n-1;i++)
		cin>>v[i];
	build(1,0,n-1);
	long long c;
	cin>>c;
	for(long long i=1;i<=c;i++)
	{
		long long a;
		cin>>a;
		if(!a)
		{
			long long p,q,v;
			cin>>p>>q>>v;
			update(1,0,n-1,p-1,q-1,v);
		}
		else
		{
			long long p,q;
			cin>>p>>q;
			cout<<query(1,0,n-1,p-1,q-1)<<endl;
		}
	} 
	return 0;
}