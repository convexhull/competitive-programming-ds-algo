#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
void sieve()
{
    vector<int>num(200010);
    for(int i=1;i<=200009;i++)
        num[i]=i;
    num[1]=num[0]=-1;
    for(int i=2;i*i<=200009;i++)
    {
        if(num[i]!=-1)
        {
            for(int j=2*i;j<=200009;j+=i)
                num[j]=-1;
        }
    }
    for(int i=0;i<200010;i++)
        if(num[i]!=-1)
            prime.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector< vector<int> > matrix(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
    sieve();
    int ans = 1e9;
    for(int i=0;i<n;i++)
    {
        int steps = 0;
        for(int j=0;j<m;j++)
        {
            steps += (*lower_bound(prime.begin(),prime.end(),matrix[i][j]) - matrix[i][j]);
        }
        ans = min(ans,steps);
    }
    for(int j=0;j<m;j++)
    {
        int steps = 0;
        for(int i=0;i<n;i++)
        {
            steps+=(*lower_bound(prime.begin(),prime.end(),matrix[i][j])-matrix[i][j]);
        }
        ans = min(ans,steps);
    }
    cout<<ans;
    return 0;    
}

