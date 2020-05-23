#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > result{{1,0},{0,1}};
vector< vector<int> >  mult(vector< vector<int> > &first, vector< vector<int> > &second)
{
    vector< vector<int> >ans(2,vector<int>(2));
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            int sum=0;
            for(int k=0;k<=1;k++)
            {
                sum+=first[i][k]*second[k][j];
            }
            ans[i][j]=sum;
        }
    }
    return ans;
}
void matrixpower(int n)
{
    vector< vector<int> > factor{{0,1},{1,1}};
    while(n!=0)
    {
        if(n%2)
            result = mult(result,factor);
        factor=mult(factor,factor);
        n/=2;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cout<<"Enter the value of n to find fibo(n) "<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        matrixpower(n-1);
        /* for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }*/
        cout<<result[1][1]<<endl;
        result={{1,0},{0,1}};
    }
    return 0;
}
