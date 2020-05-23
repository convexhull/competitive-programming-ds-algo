#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int a,f;
    cin>>a;
    f=a;
    priority_queue<pair<int,int>,vector< pair<int,int> > , greater< pair<int,int> > >pq;
    for(int i=2;i<=n;i++)
    {
        int x;
        cin>>x;
        pq.push(make_pair(abs(x-a),i));
        a=x;
    }
    pq.push(make_pair(abs(f-a),1));
    cout<<pq.top().second<<" ";
    pq.top().second==1 ? cout<<n : cout<<pq.top().second-1;
    return 0;
}
