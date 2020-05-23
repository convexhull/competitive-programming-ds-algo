#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        int cnta=0,cntb=0;
        cin>>s;
        vector< pair<int,int> > arr;
        int l = s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='A')
            {
                arr.push_back(make_pair(i,0));
            }
            if(s[i]=='B')
            {
                arr.push_back(make_pair(i,1));
            }
        }
        int sz=arr.size();
        for(int i=0;i<sz-1;i++)
        {
            if(arr[i+1].second == arr[i].second)
            {
                if(arr[i].second==0)
                    cnta += arr[i+1].first-arr[i].first-1 ;
                else
                    cntb += arr[i+1].first-arr[i].first-1;
            }
        }
        int a = cnta+count(s.begin(),s.end(),'A');
        int b = cntb+count(s.begin(),s.end(),'B');
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}

