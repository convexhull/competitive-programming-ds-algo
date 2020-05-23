#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
vector<long long>tree;
vector<long long>lazy;
void update(long long node, long long lo, long long hi, long long l, long long r, long long val)
{
	if(lazy[node])
	{
		tree[node] += (hi-lo+1)*lazy[node];
		if(lo != hi)
		{
			lazy[node*2] += lazy[node];
			lazy[node*2+1] += lazy[node];
		}
		lazy[node] = 0;
	}
	if(r<lo || l>hi)
		return ;
	if(lo>=l && hi<=r)
	{
		tree[node] += (hi-lo+1)*val;
		if(lo != hi)
		{
			lazy[node*2] += val;
			lazy[node*2+1] += val;
		}
		return ;
	}
	long long mid= (lo+hi)/2;
	update(node*2,lo,mid,l,r,val);
	update(node*2+1,mid+1,hi,l,r,val);
	tree[node] = tree[node*2] + tree[node*2+1];
}
long long query(long long node, long long lo, long long hi, long long l, long long r)
{
	if(lazy[node])
	{
		tree[node] += (hi-lo+1)*lazy[node];
		if(lo != hi)
		{
			lazy[node*2] += lazy[node];
			lazy[node*2+1] += lazy[node];
		}
		lazy[node] = 0;
	}
	if(r<lo || l>hi)
		return 0;
	if(l<=lo && r>=hi)
		return tree[node];
	long long mid= (lo+hi)/2;
	return query(node*2,lo,mid,l,r) +  query(node*2+1,mid+1,hi,l,r);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		v.resize(n);
		tree.resize(4*n+10);
		lazy.resize(4*n+10);
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
		v.clear();
		tree.clear();
		lazy.clear();
	}
	return 0;
}