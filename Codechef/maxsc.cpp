#include<bits/stdc++.h>
using namespace std;
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
        vector< vector<long long> > matrix(n,vector<long long>(n));
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<n;j++)
                cin>>matrix[i][j];
            sort(matrix[i].begin(),matrix[i].end());
        }
        long long picked = matrix[n-1][n-1];
        long long ans = picked;
        bool flag = true;
        for(long long i=n-2;i>=0;i--)
        {
            for(long long j=n-1;j>=0;j--)
            {
                if(matrix[i][j]<picked)
                {
                    ans = ans + matrix[i][j];
                    picked = matrix[i][j];
                    break;
                }
                if(j==0)
                    flag = false;
            }
        }
        flag ? cout<<ans : cout<<-1;
        cout<<endl;
    }
    return 0;   
}

