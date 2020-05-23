#include<bits/stdc++.h>
using namespace std;
int mexval(set<int> &mex)
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
int grundy(int n)
{
    if(n==0)
        return 0;
    set<int>mex;
    mex.insert(grundy(n/2));
    mex.insert(grundy(n/3));
    mex.insert(grundy(n/6));
    return mexval(mex);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<grundy(n)<<endl;
    return 0;
}
