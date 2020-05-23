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
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>cnt(1000010);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
        int mul = count(cnt.begin(),cnt.end(),2);
        if(mul == 0)
        {
            rotate(v.begin(),v.begin()+1,v.end());
            n == 1 ? cout<<0<<endl : cout<<n<<endl; 
            for(auto x:v)
                cout<<x<<" ";
        }
        else if(mul == 1)
        {
            if(n==2)
            {
                cout<<0<<endl;
                for(auto x:v)
                    cout<<x<<" ";
            }
            else if(n==3)
            {
                rotate(v.begin(),v.begin()+1,v.end());
                cout<<n-1<<endl;
                for(auto x:v)
                    cout<<x<<" ";
            }
            else
            {
                pair<int,int>jp = make_pair(-1,-1);
                for(int i=0;i<n;i++)
                {
                    if(cnt[v[i]]>1)
                    {
                        if(jp.first < 0)
                            jp.first = i;
                        else
                            jp.second = i;
                    }
                }
                if(abs(jp.first-jp.second)==1 || abs(jp.first-jp.second) == n-1)
                    rotate(v.begin(),v.begin()+2,v.end());
                else
                    rotate(v.begin(),v.begin()+1,v.end());
                cout<<n<<endl;
                for(auto x:v)
                    cout<<x<<" ";
            }
        }
        else
        {
            int once = count(cnt.begin(),cnt.end(),1);
            if(once == 1)
            {
                vector<int>twice;
                vector<int>mapper(1000010);
                vector<bool>vis(1000010,false);
                int p;
                for(int i=0;i<n;i++)
                {
                    if(cnt[v[i]]==1)
                    {
                        p = i;
                        break;
                    }
                }
                for(int i=0;i<n;i++)
                {
                    if(cnt[v[i]]==2 && vis[v[i]]==false)
                    {
                        twice.push_back(v[i]);
                        vis[v[i]]=true;
                    }
                }
                int l = twice.size();
                for(int i = 0;i<l;i++)
                {
                    i != l-1 ? mapper[twice[i]] = twice[i+1] : mapper[twice[i]] = twice[0];
                }
                int c = 0;
                cout<<n<<endl;
                for(int i=0;i<n;i++)
                {
                    if(i==p)
                        cout<<twice[0]<<" ";
                    else if(mapper[v[i]]==twice[0])
                    {
                        if(c==0)
                        {
                            cout<<mapper[v[i]]<<" ";
                            c++;
                        }
                        else
                            cout<<v[p]<<" ";
                    }
                    else
                        cout<<mapper[v[i]]<<" ";
                }
            }
            else
            {
                vector<int>once;
                for(int i=0;i<n;i++)
                    if(cnt[v[i]]==1)
                        once.push_back(v[i]);
                vector<int>twice;
                vector<bool>vis(1000010,false);
                for(int i=0;i<n;i++)
                {
                    if(cnt[v[i]]==2 && vis[v[i]]==false)
                    {
                        twice.push_back(v[i]);
                        vis[v[i]]=true;
                    }
                }
                vector<int> mapper(1000010);
                int l1 = once.size();
                int l2 = twice.size();
                for(int i=0;i<l1;i++)
                {
                    i != l1-1 ? mapper[once[i]] = once[i+1] : mapper[once[i]] = once[0];
                }
                for(int i=0;i<l2;i++)
                {
                    i!=l2-1 ? mapper[twice[i]] = twice[i+1] : mapper[twice[i]] = twice[0];
                }
                cout<<n<<endl;
                for(int i=0;i<n;i++)
                    cout<<mapper[v[i]]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
