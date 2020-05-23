#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    bool flag= true;
    vector< vector<int> >mat(5001);
    vector<int>size(5001);
    for(int i=1;i<=2*n;i++)
    {
        int x;
        cin>>x;
        mat[x].push_back(i);
        size[x]++;
    }
    for(auto x:size)
        if(x%2)
        {
            flag=false;
            break;
        }
    if(!flag)
    {
        cout<<-1;
        return 0;
    }
    for(int i=1;i<=5000;i++)
    {
        if(size[i])
        {
            for(int j=0;j<size[i];j+=2)
            {
                cout<<mat[i][j]<<" "<<mat[i][j+1]<<'\n';
            }
        }
    }
    return 0;
}

