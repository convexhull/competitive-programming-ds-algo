/* Conditions :
 * O(1) query if following hold:
 * 1. No update.
 * 2. F associative .
 * 3. Common part doesn't cause error. 
*/
#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > createtable(vector<int> &arr)
{
    int n = arr.size();
    int k = (int)log2(n);
    vector< vector<int> > sparse(n,vector<int>(k+1));
    for(int i=0;i<n;i++)
        sparse[i][0] = arr[i];
    for(int j=1;j<=k;j++)
    {
        for(int i=0;(i+(int)pow(2,j))-1 < n;i++)
            sparse[i][j] = __gcd(sparse[i][j-1],sparse[i+(int)pow(2,j-1)][j-1]);
    }
    return sparse;
}
int query(vector< vector<int> > &sparse, int l, int r)
{
    int k = (int)log2(r-l+1);
    return __gcd(sparse[l][k],sparse[r-(int)pow(2,k)+1][k]);
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
    vector< vector<int> > sparse = createtable(v);
    int Q;
    cin>>Q;
    while(Q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<query(sparse,l,r)<<endl;
    }
    return 0;    
}

