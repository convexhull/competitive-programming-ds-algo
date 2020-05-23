#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    vector<int>exor(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=1;i<=q;i++)
    {
        int type,idx,x;
        cin>>type>>idx>>x;
        idx--;
        if(type==1)
        {
           v[idx]=x;
        }
        if(type==2)
        {
            int cnt = 0;
            exor[0] = v[0];
            for(int j=1;j<n;j++)
                exor[j] = exor[j-1] ^ v[j];
            for(int j=0;j<=idx;j++)
            {
                if(exor[j]==x)
                    cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}

