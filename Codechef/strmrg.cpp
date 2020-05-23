#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        vector< vector< pair<int,int> > > matrix(n+1,vector< pair<int,int > >(m+1));
        string s1,s2;
        cin>>s1>>s2;
        s1="@"+s1;
        s2="#"+s2;
        for(int i=0;i<=n;i++)
            i==0 ? matrix[0][i]=make_pair(0,1) : (s1[i]==s1[i-1] ? matrix[0][i]=matrix[0][i-1] : matrix[0][i]=make_pair(matrix[0][i-1].first+1,1));
        for(int i=0;i<=m;i++)
            i==0 ? matrix[i][0]=make_pair(0,-1) : (s2[i]==s2[i-1] ? matrix[i][0]=matrix[i-1][0] : matrix[i][0]=make_pair(matrix[i-1][0].first+1,-1));
        matrix[0][0]=make_pair(0,0);
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {   
                int frmt,frml;
                switch(matrix[i-1][j].second)
                {
                    case 1:
                        s2[i]==s1[j] ? frmt = matrix[i-1][j].first : frmt = matrix[i-1][j].first+1;
                        break;
                    case -1:
                        s2[i]==s2[i-1] ? frmt = matrix[i-1][j].first : frmt = matrix[i-1][j].first+1;
                        break;
                    case 0:
                        s2[i]==s1[j] || s2[i]==s2[i-1] ? frmt = matrix[i-1][j].first : frmt = matrix[i-1][j].first+1;
                        break;
                }
                switch(matrix[i][j-1].second)
                {
                    case -1:
                        s1[j]==s2[i] ? frml = matrix[i][j-1].first : frml = matrix[i][j-1].first+1;
                        break;
                    case 1:
                        s1[j]==s1[j-1] ? frml = matrix[i][j-1].first : frml = matrix[i][j-1].first+1;
                        break;
                    case 0:
                        s1[j]==s2[i] || s1[j]==s1[j-1] ? frml = matrix[i][j-1].first : frml = matrix[i][j-1].first+1;
                        break;
                }
                matrix[i][j].first = min(frmt,frml);
                if(frmt==frml)
                    matrix[i][j].second = 0;
                else if(frmt<frml)
                    matrix[i][j].second = -1;
                else
                    matrix[i][j].second = 1;
            }
        }
        /*for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<matrix[i][j].first<<" "<<matrix[i][j].second<<'\t';
            }
            cout<<endl;
        }*/
        cout<<matrix[m][n].first<<endl;
    }
    return 0;
}
