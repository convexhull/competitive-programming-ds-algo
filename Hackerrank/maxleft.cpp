#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
vector<int>segtree;
void build(int node,int lo,int hi)
{
    if(lo==hi)
    {
        segtree[node]=arr[lo];
        return ;
    }
    int mid=(lo+hi)/2;
    build(node*2,lo,mid);
    build(node*2+1,mid+1,hi);
    segtree[node]=max(segtree[node*2],segtree[node*2+1]);
}
int query(int node, int lo, int hi, int l,int r)
{
    if(lo==l && hi==r)
        return segtree[node];
    int mid=(lo+hi)/2;
    if(r<=mid)
        return query(node*2,lo,mid,l,r);
    if(l>mid)
        return query(node*2+1,mid+1,hi,l,r);
    return max(query(node*2,lo,mid,l,mid),query(node*2+1,mid+1,hi,mid+1,r));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q,k;
    cin>>n>>q>>k;
    arr.resize(n);
    segtree.resize(4*n);
    for(int i=0;i<=n-1;i++)
        cin>>arr[i];
    build(1,0,n-1);
    while(q--)
    {
        int r;
        cin>>r;
        int l=r-k+1;
        cout<<query(1,0,n-1,l-1,r-1)<<'\n';
    }
    return 0;
}

