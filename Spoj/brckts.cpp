#include<bits/stdc++.h>
using namespace std;
struct segnode
{
    int un_left,un_right,match;
    void init(int num)
    {
        match=0;
        if(num==0)
            un_left=1;
        else
            un_right=1;
    }
    void merge(segnode left,segnode right)
    {
        match=min(left.un_left,right.un_right);
        un_left=left.un_left+right.un_left-match;
        un_right=left.un_right+right.un_right-match;
    }
    void revv()
    {
        un_left=!un_left;
        un_right=!un_right;
    }
};
vector<segnode>tree;
vector<int>arr;
void build(int node,int lo,int hi)
{
    if(lo==hi)
    {
        tree[node].init(arr[lo]);
        return ;
    }
    int mid=(lo+hi)/2;
    build(node*2,lo,mid);
    build(node*2+1,mid+1,hi);
    tree[node].merge(tree[node*2],tree[node*2+1]);
}
segnode query(int node,int lo,int hi,int l,int r)
{
    if(lo==l && hi==r)
        return tree[node];
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
void  update(int node,int lo,int hi,int idx)
{
    if(lo==hi)
    {
        tree[node].revv();
        return ;
    }
    int mid=(lo+hi)/2;
    if(idx<=mid)
        update(node*2,lo,mid,idx);
    else
        update(node*2+1,mid+1,hi,idx);
    tree[node].merge(tree[node*2],tree[node*2+1]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int T=1;T<=10;T++)
    {
        int n;
        cin>>n;
        tree.resize(4*n);
        for(int i=1;i<=n;i++)
        {
            char c;
            cin>>c;
            if(c=='(')
                arr.push_back(0);
            else
                arr.push_back(1);
        }
        build(1,0,n-1);
        //cout<<tree[1].un_left<<" "<<tree[1].un_right<<endl;
        //cout<<tree[2].un_left<<" "<<tree[2].un_right<<endl;
        //cout<<tree[3].un_left<<" "<<tree[3].un_right<<endl;
        int m;
        cin>>m;
        cout<<"Test "<<T<<":"<<endl;
        while(m--)
        {
            int k;
            cin>>k;
            if(!k)
            {
                segnode ans=query(1,0,n-1,0,n-1);
                if(!ans.un_left && !ans.un_right)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                update(1,0,n-1,k-1);
            }
        }
        tree.clear();
        arr.clear();
    }
    return 0;
}
        
