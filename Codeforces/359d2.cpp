//This solution is wrong.
#include<bits/stdc++.h>
using namespace std;
vector< vector< pair<int,int> > > sparse(300010, vector< pair<int,int> >((int)ceil(log2(300010))+1));
vector<int>pw2(31);
void pwrfnc()
{
    for(int i=0;i<31;i++)
        pw2[i] = (int)pow(2,i);
}
void createtable(vector<int> &v)
{
    int n = v.size();	
    for(int i=0;i<n;i++)
        sparse[i][0].first = sparse[i][0].second = v[i];
    for(int j=1;pw2[j]<=n;j++)
    {
        for(int i=0;i+pw2[j]-1<n;i++)
            sparse[i][j].first = __gcd(sparse[i][j-1].first,sparse[i+pw2[j-1]][j-1].first);
        for(int i=0;i+pw2[j]-1<n;i++)
            sparse[i][j].second= min(sparse[i][j-1].second, sparse[i+pw2[j-1]][j-1].second);  
    }
}
pair<int,int> query(int l,int r)
{
    int k = (int)log2(r-l+1);
    return make_pair(__gcd(sparse[l][k].first, sparse[r-pw2[k]+1][k].first),min(sparse[l][k].second, sparse[r-pw2[k]+1][k].second));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    pwrfnc();
    createtable(v);
    int lp = 0, rp = 0, ans = 0;
    while(lp+rp<n)
    {
        pair<int,int> res = query(lp,rp);
        if(res.first == res.second )
        {
            int newans = rp-lp;
            if(newans>ans)
            {
                ans = newans;
            }
            rp++;
        }
        else
            lp++;
    }
    cout<<ans<<endl;
    return 0;
}
