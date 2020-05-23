#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector< vector<int> > pdiv(100010); 
void prep()
{
    for(int i=2;i<=100000;i++)
    {
        if(pdiv[i].empty())
        {
            for(int j = i;j<=100000;j+=i)
                pdiv[j].push_back(i);
        }
    }
    for(int i=1;i<=10;i++)
    {
        for(int j=0;j<pdiv[i].size();j++)
            cout<<pdiv[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    v.resize(n);
    prep();
    for(int i=0;i<n;i++)
        cin>>v[i];
    int Q;
    cin>>Q;
    while(Q--)
    {
        int a;
        cin>>a;
        if(a==1)
        {

        }
        else
        {

        }
    }
    
    return 0;    
}

