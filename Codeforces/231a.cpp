#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int ans=0;
    vector< vector<int> >matrix(n,vector<int>(3));
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            cin>>matrix[i][j];
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<3;j++)
        {
            if(matrix[i][j])
                cnt++;
        }
        if(cnt>1)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
