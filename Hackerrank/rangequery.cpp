#include<bits/stdc++.h>
using namespace std;
struct segnode
{
    int mini;
    int maxi;
    int sum;
    void init(int x)
    {
        mini=x;
        maxi=x;
        sum=2*x;
    }
    void merge(segnode &left, segnode &right)
    {
        mini=min(left.mini,right.mini);
        maxi=max(left.maxi,right.maxi);
        sum=mini+maxi;
    }
};
vector<segnode>segtree;
vector<int>arr;
void build(int node,int lo,int hi)
{
    if(lo==hi)
    {
        segtree[node].init(arr[lo]);
        return ;
    }
    int mid=(lo+hi)/2;
    build(node*2,lo,mid);
    build(node*2+1,mid+1,hi);
    segtree[node].merge(segtree[node*2],segtree[node*2+1]);
    return ;
}
segnode query(int node,int lo, int hi, int l,int r)
{
    if(lo==hi)
        return segtree[node];
    int mid=(lo+hi)/2;
    if(r<=mid)
        return query(node*2,lo,mid,l,r);
    if(l>mid)
        return query(node*2+1,mid+1,hi,l,r);
    segnode result,left,right;
    left=query(node*2,lo,mid,l,mid);
    right=query(node*2+1,mid+1,hi,mid+1,r);
    result.merge(left,right);
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    arr.resize(n);
    segtree.resize(4*n);
    for(int i=0;i<=n-1;i++)
        cin>>arr[i];
    build(1,0,n-1);
    for(int i=1;i<=q;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<query(1,0,n-1,l-1,r-1).sum<<endl;
    }
    return 0;
}


