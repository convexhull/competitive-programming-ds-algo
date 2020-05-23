#include<bits/stdc++.h>
using namespace std;
unordered_map<string,long long>hashmap;
unordered_map<string,long long>cnt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin>>T;
    while(T--)
    {
        long long n;
        cin>>n;
        vector<string>s;
        bool flag=true;
        for(long long i=1;i<=n;i++)
        {
            string num;
            cin>>num;
            s.push_back(num);
            long long l=num.size();
            cnt[num]++;
            for(long long i=1;i<=l-1;i++)
            {
                hashmap[num.substr(0,i)]++;
            }
        }
        for(long long i=0;i<=n-1;i++)
        {
            if(cnt[s[i]]>1)
            {
                flag=false;
                break;
            }
            if(hashmap[s[i]]>=1)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;       
        hashmap.clear();
        cnt.clear();
    }
    return 0;
}

