#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long n,p;
        cin>>n>>p;
        string master;
        bool flag = true;
        if(p==1 || p==2)
            flag=false;
        else
        {
            master.push_back('a');
            for(long long i=1;i<=p-2;i++)
                master.push_back('b');
            master.push_back('a');
        }
        long long rep = n/p;
        if(!flag)
            cout<<"impossible";
        else
        {
            for(long long i=1;i<=rep;i++)
                cout<<master;
        }
        cout<<endl;
    }
    return 0;
}

