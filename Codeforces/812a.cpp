#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector< vector<int> >matrix(4,vector<int>(4));
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>matrix[i][j];
    bool flag=true;
    for(int i=0;i<4;i++)
    {
        if(matrix[i][3]==1 )
        {
            int above = i>0 ? i-1 : 3;
            int below = i<3 ? i+1 : 0;
            int opp = i==0 || i== 1 ? i+2 : i-2;
            if(matrix[below][0] == 1 || matrix[above][2]==1 || matrix[i][1]==1 || matrix[opp][1]==1)
            {
                flag=false;
            }
        }
    }
    !flag ? cout<<"YES" : cout<<"NO";
    return 0;
}

