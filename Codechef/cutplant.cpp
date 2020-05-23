#include<bits/stdc++.h>
using namespace std;
vector<long long>pw;
vector< vector< pair<long long,long long> > > sparse;
void create(vector<long long> &a, vector<long long> &b)
{
    long long n = a.size();
    for(long long i=0;i<n;i++)
    {
        sparse[i][0].first = a[i];
        sparse[i][0].second = b[i];
    }
    for(long long j=1;pw[j]<=n;j++)
    {
        for(long long i=0;i+pw[j]-1<n;i++)
        {
            sparse[i][j].first = min(sparse[i][j-1].first , sparse[i+pw[j-1]][j-1].first);
            sparse[i][j].second = max(sparse[i][j-1].second, sparse[i+pw[j-1]][j-1].second);
        }
    }
}
long long aquery(long long l, long long r)
{
    long long k = (long long)log2(r-l+1);
    return min(sparse[l][k].first, sparse[r-pw[k]+1][k].first);
}
long long bquery(long long l, long long r)
{
    long long k = (long long)log2(r-l+1);
    return max(sparse[l][k].second , sparse[r-pw[k]+1][k].second);
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
        vector<long long>a(n),b(n);
        for(long long i=0;i<n;i++)
            cin>>a[i];
        for(long long i=0;i<n;i++)
            cin>>b[i];
        bool flag = true;
        for(long long i=0;i<n;i++)
            if(b[i]>a[i])
                flag = false;
        if(!flag)
        {
            cout<<-1<<'\n';
            continue;
        }
        pw.resize(32);
        for(long long i=0;i<32;i++)
            pw[i] = (long long)pow(2,i);
        sparse.resize(n);
        for(long long i=0;i<n;i++)
            sparse[i].resize((long long)ceil(log2(n))+1);
        create(a,b);
        unordered_map< long long,vector<long long> > pos;
        for(long long i=0;i<n;i++)
            pos[b[i]].push_back(i);
        vector<bool>vis(n);
        long long ans = 0;
        for(long long i=0;i<n;i++)
        {
            if(!vis[i])
            {
                vis[i]=true;
                long long l = pos[b[i]].size();
                bool f = false;
                ans += (b[pos[b[i]][0]]!=a[pos[b[i]][0]]);
                f = ( b[pos[b[i]][0]]!=a[pos[b[i]][0]] );
                for(long long j=1;j<l;j++)
                {
                    long long idx = pos[b[i]][j];
                    vis[idx] = true;
                    long long pidx = pos[b[i]][j-1];
                    if( !(aquery(pidx,idx)>=b[idx] && bquery(pidx,idx)<=b[idx]) )  
                    {
                        f = false;
                        if(b[idx] == a[idx])
                            ans += 0;
                        else
                        {
                            ans += 1;
                            f = true;
                        }
                    }
                    else
                    {
                        if(b[idx] == a[idx])
                            ans += 0;
                        else
                        {
                            if( !f )
                            {
                                ans += 1;
                                f = true;
                            }
                            else
                            {
                                ans +=0;
                            }
                        }
                    }                                         
                }
            }
        }
        cout<<ans<<'\n';
        sparse.clear();
        pw.clear();
    }
    return 0;
}
