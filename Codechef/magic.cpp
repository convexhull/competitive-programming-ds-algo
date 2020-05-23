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
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<n;i++)
            cin>>v[i];
        if(n<=2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        stack<long long>s;
        bool flag = true;
        for(long long i=0;i<n;i++)
        {
            if(s.empty() || v[i] >= s.top() )
                s.push(v[i]);
            else
            {
                vector<long long>sorted;
                for(long long j=i;j<n;j++)
                    sorted.push_back(v[j]);
                stack<long long>p;
                while(!s.empty())
                {
                    p.push(s.top());
                    s.pop();
                }
                while(!p.empty())
                {
                    sorted.push_back(p.top());
                    p.pop();
                }
                sort(v.begin(),v.end());
                if(v!= sorted)
                    flag = false;
                break;
            }
        }
        flag ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
	return 0;
}

