#include<bits/stdc++.h>
using namespace std;
long long func(vector<long long> &ab, vector<long long>&cd)
{
    sort(ab.begin(),ab.end());
    sort(cd.begin(),cd.end());
    long long lf=ab.size();
    long long ls=cd.size();
    long long ans=0;
    for(long long i=0;i<lf;i++)
    {
        if(binary_search(cd.begin(),cd.end(),0-ab[i]))
        {
            ans+=(upper_bound(cd.begin(),cd.end(),-ab[i])-lower_bound(cd.begin(),cd.end(),-ab[i]));
            
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<long long> A,B,C,D,ab,cd;
    for(long long i=1;i<=n;i++)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        A.push_back(a);
        B.push_back(b);
        C.push_back(c);
        D.push_back(d);
    }
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<n;j++)
        {
            ab.push_back(A[i]+B[j]);
        }
    }
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<n;j++)
        {
            cd.push_back(C[i]+D[j]);
        }
    }
    cout<<func(ab,cd);
    return 0;
}
    
