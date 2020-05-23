#include<bits/stdc++.h>
using namespace std;
vector<int>parent,rnk;
int find_set(int x)
{
    if(x!=parent[x])
        parent[x]=find_set(parent[x]);
    return parent[x];
}
void merge_set(int a,int b)
{
    int pa=find_set(a);
    int pb=find_set(b);
    if(rnk[pa]>rnk[pb])
        parent[pb]=parent[pa];
    else
        parent[pa]=parent[pb];
    if(rnk[pa]==rnk[pb])
        rnk[pb]++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int num;
    cin>>num;
    parent.resize(num+1);
    rnk.resize(num+1);
    for(int i=1;i<=num;i++)
        parent[i]=i;
    for(int i=1;i<=num;i++)
        cout<<parent[i]<<" ";
    cout<<endl;
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int a,b;
        cin>>a>>b;
        merge_set(a,b);
        for(int i=1;i<=num;i++)
            cout<<parent[i]<<" ";
        cout<<endl;
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
    	int x;
    	cin>>x;
    	cout<<find_set(x)<<endl;
    }
    return 0;
}
