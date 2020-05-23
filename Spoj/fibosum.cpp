#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
vector< vector<long long> > matrixmult(vector< vector<long long> > &first, vector< vector<long long> > &second)
{
    vector< vector<long long> > ans(2,vector<long long>(2));
    for(long long i=0;i<=1;i++)
    {
        for(long long j=0;j<=1;j++)
        {
            long long sum=0;
            for(long long k=0;k<=1;k++)
            {
                sum = ( sum + (first[i][k]%M * second[k][j]%M)%M )%M;
            }
            ans[i][j]=sum;
        }
    }
    return ans;
}
long long fibo(long long n)
{
    if(n==0)
        return 1;  
    vector< vector<long long> > result{{1,0},{0,1}};
    vector< vector<long long> > factor{{0,1},{1,1}};
    while(n>0)
    {
        if(n%2)
            result=matrixmult(result,factor);
        factor=matrixmult(factor,factor);
        n/=2;
    }
    return result[1][1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long n,m;
        cin>>n>>m;
        long long first=fibo(n)-1;
        long long second=fibo(m+1)-1;
        //long long sum1=fibo(n+1)-1;	
        //long long sum2=fibo(m+1)-1;
        long long sum=(second%M - first%M)%M;
        if(sum<0)
        	sum+=M;
        //cout<<first<<" "<<second<<endl;
        cout<<sum<<endl;
    }
    return 0;
}
                                                                                                                                         
