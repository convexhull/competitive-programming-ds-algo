#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int r,c;
    cin>>r>>c;
    vector<int>row(100),col(100);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='S')
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(row[i]==1 && col[j]==1)
                cnt++;
        }
    }
    cout<<r*c-cnt<<endl;
    return 0;
}
