#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int s1,s2,s3,s4;
    set<int>s;
    int cnt=0;
    for(int i=1;i<=4;i++)
    {
        int x;
        cin>>x;
        if(s.insert(x).second)
            cnt++;
    }
    cout<<4-cnt<<endl;
    return 0;
}
