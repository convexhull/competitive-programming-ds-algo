#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<long long>cost(n);
    for(long long i=0;i<n;i++)
        cin>>cost[i];
    vector<long long>sumcost(n+1);
    for(long long i=1;i<=n;i++)
    {
        sumcost[i] = sumcost[i-1]+cost[i-1];
    }
    vector<long long>nondec = cost;
    sort(nondec.begin(),nondec.end());
    vector<long long>sumdec(n+1);
    for(long long i=1;i<=n;i++)
        sumdec[i] = sumdec[i-1] + nondec[i-1];
    long long m;
    cin>>m;
    for(long long i=1;i<=m;i++)
    {
        long long type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<sumcost[r]-sumcost[l-1]<<endl;
        }
        else
        {
            cout<<sumdec[r]-sumdec[l-1]<<endl;
        }
    }
    return 0;
}

