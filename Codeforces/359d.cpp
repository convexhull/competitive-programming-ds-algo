#include<bits/stdc++.h>
using namespace std;
vector< vector< pair<int,int> > > sparse(300010, vector< pair<int,int > >((int)log2(300010)+1));
vector<int>ans(300009);
vector<int>pwr(30);
void createtable(vector<int> &arr)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
        sparse[i][0].first = sparse[i][0].second = arr[i];
    for(int j=1;pwr[j]<=n;j++)
    {
        for(int i=0; i+pwr[j]-1 < n;i++)
            sparse[i][j].first = __gcd(sparse[i][j-1].first,sparse[i+pwr[j-1]][j-1].first);
        for(int i=0;i+pwr[j]-1 < n;i++)
            sparse[i][j].second = min(sparse[i][j-1].second, sparse[i+pwr[j-1]][j-1].second);
    }
}
pair<int,int> query(int l, int r)
{
    int k = (int)log2(r-l+1);
    return make_pair( __gcd(sparse[l][k].first,sparse[r-pwr[k]+ 1][k].first) , min(sparse[l][k].second , sparse[r-pwr[k]+1][k].second));
}
int predicate(int n, int x)
{
    bool flag = false;
    for(int i=0;i+x<n;i++)
    {
        if(query(i,i+x).first == query(i,i+x).second )
        {
            ans[x]++;
            flag = true;
        }
    }
    return flag ? 1 : 0;
}
int pwrfunc()
{
    for(int i=0;i<30;i++)
        pwr[i]=(int)pow(2,i);
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
    pwrfunc();
    createtable(v);
    int lo = 0; int hi = n-1;
    while(lo<hi)
    {
        int mid = lo + (hi-lo+1)/2;
        if(predicate(n,mid))
            lo = mid;
        else
            hi = mid-1;
    }
    int mx = 0 ;
    for(int i=n-1;i>=0;i--)
        if(ans[i])
        {
            mx = i;
            break;
        }
    cout<< (!mx ? n : ans[mx]) << " " <<mx << endl;
    for(int i=0;i+mx<n;i++)
        if(query(i,i+mx).first == query(i,i+mx).second)
            cout<<i+1<<" ";
    return 0;   
}

