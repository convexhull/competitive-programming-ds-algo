#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while(1)
    {
        vector<int> quant(4),need(4),extra(4);
        for(int i=0;i<4;i++)
            cin>>quant[i];
        for(int i=0;i<4;i++)
            cin>>need[i];
        if(quant[0]==-1)
            break;
        while(accumulate(quant.begin(),quant.end(),0))
        {
            for(int i=0;i<=3;i++)
            {
                if(quant[i]-need[i] < 0)
                {
                    extra[i]+=(need[i]-quant[i]);
                    quant[i]=0;
                }
                else
                    quant[i]-=need[i];
            }
        }
        for(auto x:extra)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
