#include<bits/stdc++.h>
using namespace std;
bool offline(pair< pair<string ,int >,int > p1, pair< pair<string,int> , int> p2)
{
    if(p1.first.second==p2.first.second)
        return p1.second > p2.second;
    return p1.first.second < p2.first.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector< pair< pair< string,int> , int> > contestant;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        string name;
        int region,score;
        cin>>name>>region>>score;
        mp[region]++;
        contestant.push_back(make_pair(make_pair(name,region),score));
    }
    sort(contestant.begin(),contestant.end(),offline);
    int l=contestant.size();
    for(int i=0;i<l;i+=mp[contestant[i].first.second])
    {   
        if(i+2<l && contestant[i+1].second==contestant[i+2].second && contestant[i+2].first.second==contestant[i+1].first.second)
            cout<<"?"<<endl;
        else
        {
            cout<<contestant[i].first.first<<" "<<contestant[i+1].first.first<<endl;
        }
    }
    return 0;
}

