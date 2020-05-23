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
        string s,t;
        long long n;
        cin>>s>>n;
        long long l = s.length();
        long long cnta,cntb;
        cnta = count(s.begin(),s.end(),'a');
        cntb = count(s.begin(),s.end(),'b');
        t = s;
        for(long long i=1;i<l;i++)
            s+=t;
        vector<long long> freqa(l*l),freqb(l*l),res(l*l);
        long long ans = 0;
        freqa[0] = (s[0]=='a');
        freqb[0] = (s[0]=='b');
        ans += (freqa[0]>freqb[0]);
        res[0]=ans;
        for(long long i=1;i<l*l;i++)
        {
            freqa[i] = freqa[i-1]+(s[i]=='a');
            freqb[i] = freqb[i-1]+(s[i]=='b');
            ans+=(freqa[i]>freqb[i]);
            res[i] = ans;
        }
        if(n*l<l*l)
        {
            cout<<res[n*l-1]<<endl;
        }
        else
        {
            if(cnta>cntb)
            {
                cout<<res[l*l-1]+(n*l-l*l)<<endl;
            }
            else if(cnta<cntb)
            {
                cout<<res[l*l-1]<<endl;
            }
            else
            {
                cout<<res[l*l-1]+(res[l*l-1]-(l>1 ? res[l*l-l-1] : 0 ) )*(n-l)<<endl;
            }
        }
    }
    return 0;
}
