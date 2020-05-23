#include<bits/stdc++.h>
using namespace std;
int k,l;
int mexval(set<int>&mex)
{
    int k=0;
    while(1)
    {
        if(mex.find(k)==mex.end())
            break;
        k++;
    }
    return k;
}
void precomp(vector<int> &grundy,int k, int l)
{
    for(int i=1;i<=1000009;i++)
    {
        set<int>mex;
        if(i-1>=0)
            mex.insert(grundy[i-1]);
        if(i-k>=0)
            mex.insert(grundy[i-k]);
        if(i-l>=0)
            mex.insert(grundy[i-l]);
        grundy[i]=mexval(mex);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m;
    string ans;
    cin>>k>>l>>m;
    vector<int>grundy(1000010);
    precomp(grundy,k,l);
    while(m--)
    {
        int n;
        cin>>n;
        if(!grundy[n])
            ans.push_back('B');
        else
            ans.push_back('A');
    }
    cout<<ans;
    return 0;
}

   
