#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,ans=0;
    cin>>n>>k;
    vector<int>score(n);
    for(int i=0;i<n;i++)
        cin>>score[i];
    int critical=score[k-1];
    sort(score.begin(),score.end());
    for(auto x:score)
    {
        if(x>=critical && x>0)
            ans++;
    }
    cout<<ans;
    return 0;
}
