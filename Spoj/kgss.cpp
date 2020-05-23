#include<bits/stdc++.h>
using namespace std;
struct segnode
{
    int max1;
    int max2;
    void init(int val)
    {
        max1=val;
        max2=-1e9;
    }
    segnode combine(segnode left, segnode right)
    {
        if(left.max1>right.max1)
            swap(left,right);
        max1=right.max1;
        max2=max(right.max2,left.max1);
    }
};
vector<segnode>segtree;
vector<int>arr;
void build(int node,int lo, int hi)
{
    if(lo==hi)
    {
        segtree[node].init(arr[lo]);
        return ;
    }
    int mid=(lo+hi)/2;
    build(node*2,lo,mid);
    build(node*2+1,mid+1,hi);
    segtree[node].combine(segtree[node*2],segtree[node*2+1]);
}
void update(int node,int lo, int hi, int index,int x)
{
    if(lo==hi)
    {
        segtree[node].init(x);
        return ;
    }
    int mid=(lo+hi)/2;
    if(index<=mid)
        update(node*2,lo,mid,index,x);
    else if(index>mid)
        update(node*2+1,mid+1,hi,index,x);
    segtree[node].combine(segtree[node*2],segtree[node*2+1]);
}
segnode query(int node,int lo, int hi, int l, int r)
{
    if(lo==l && hi==r)
        return segtree[node];
    int mid=(lo+hi)/2;
    if(r<=mid)
        return query(node*2,lo,mid,l,r);
    else if(l>mid)
        return query(node*2+1,mid+1,hi,l,r);
    segnode left,right,result;
    left=query(node*2,lo,mid,l,mid);
    right=query(node*2+1,mid+1,hi,mid+1,r);
    result.combine(left,right);
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n;
    arr.resize(n);
    segtree.resize(4*n+10);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>q;
    build(1,0,n-1);
    //for(int i=1;i<=30;i++)
      //  cout<<segtree[i].max1+segtree[i].max2<<endl;
    while(q--)
    {
        char c;
        cin>>c;
        if(c=='U')
        {
            int i,x;
            cin>>i>>x;
            update(1,0,n-1,i-1,x);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            segnode ans=query(1,0,n-1,l-1,r-1);
            cout<<ans.max1+ans.max2<<endl;
        }
    }
    return 0;
}
    
    
