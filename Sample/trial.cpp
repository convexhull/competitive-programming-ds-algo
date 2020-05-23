#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>ans;
    for(int j=1;j<=n;j++)
    {   
        int sumodd = 0, sumevn = 0;
        int res;
        int i = j;
        while(i>0)
        {
            int dig = i%10;
            if(dig%2)
                sumodd += dig;
            else
                sumevn += dig;
            i/=10;
        }
        res = abs(sumodd-sumevn);
        ans.push_back(res);
    }
    for(auto x:ans)
        cout<<x<<" ";
    return 0;
}

