#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long l,r;
    cin>>l>>r;
    vector< long long > v;
    for(long long i=1;i<=9;i++)
    {
        vector< string > s((long long)pow(2,i));
        for(long long j=1;j<=i;j++)
        {
            char toggle = '4';
            for(long long k=1;k<=(long long)pow(2,i);k++)
            {
                s[k-1].push_back(toggle);
                if(k%(long long)pow(2,i-j)==0)
                    toggle == '4' ? toggle = '7' : toggle = '4' ;
            }
        }
        for(string st : s)
            v.push_back(stoll(st));
    }
    v.push_back(4444444444);
    long long t = v.size();
    long long marker = 0;
    for(long long i=0;i<t;i++)
    {
        if(v[i]>=l)
        {
            marker=i;
            break;
        }
    }
    long long ans = 0;
    for(long long i=l;i<=r;i++)
    {
       if(i > v[marker])
            marker++;
       ans += v[marker];
    }
    cout<<ans<<endl;
    return 0;
}


        


