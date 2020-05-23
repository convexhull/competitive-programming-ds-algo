#include<bits/stdc++.h>
using namespace std;
struct segnode
{
	long long sum,bs,bls,brs;
	void init(long long val)
	{
		sum=bs=bls=brs=val;
	}
	void merge(segnode left, segnode right)
	{
		sum=left.sum+right.sum;
		bls=max(left.bls,left.sum+right.bls);
		brs=max(right.brs,right.sum+left.brs);
		bs=max(max(left.bs,right.bs),left.brs+right.bls);
	}
};
vector<long long>v;
vector<segnode>tree;
void build(long long node, long long lo, long long hi)
{
	if(lo==hi)
	{
		tree[node].init(v[lo]);
		return ;
	}
	long long mid= (lo+hi)/2;
	build(node*2,lo,mid);
	build(node*2+1,mid+1,hi);
	tree[node].merge(tree[node*2],tree[node*2+1]);
}
void update(long long node, long long lo, long long hi, long long idx, long long val)
{
	if(lo==hi)
	{
		tree[node].init(val);
		return ;
	}
	long long mid= (lo+hi)/2;
	if(idx>=lo && idx<=mid)
		update(node*2,lo,mid,idx,val);
	if(idx>mid && idx<=hi)
		update(node*2+1,mid+1,hi,idx,val);
	tree[node].merge(tree[node*2],tree[node*2+1]);
}
segnode query(long long node, long long lo, long long hi, long long l, long long r)
{
	if(r<lo || l>hi)
	{
		segnode result;
		result.init(-100000);
		return result;

	}
	if(l<=lo && r>=hi)
	{
		return tree[node];
	}
	long long mid= (lo+hi)/2;
	segnode left= query(node*2,lo,mid,l,r);
	segnode right= query(node*2+1,mid+1,hi,l,r);
	segnode result;
	result.merge(left,right);
	return result;
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
	long long m;
	cin>>m;
	for(long long i=1;i<=m;i++)
	{
		long long a;
		cin>>a;
		if(a)
		{
			long long x,y;
			cin>>x>>y;
			cout<<query(1,0,n-1,x-1,y-1).bs<<endl;
		}
		else
		{
			long long x,y;
			cin>>x>>y;
			update(1,0,n-1,x-1,y);
		}
	}
	return 0;
}