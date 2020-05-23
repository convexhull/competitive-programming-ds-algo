#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
vector<int>dist(10010,numeric_limits<int>::max());
map< int,vector<int> > graph;
void sieve()
{
    vector<int>num(10010);
    for(int i=2;i*i<=10000;i++)
    {
        if(!num[i])
        {
            for(int j=2*i;j<=10000;j+=i)
                num[j]=-1;
        }
    }
    for(int i=1000;i<=10000;i++)
    {
        if(num[i]!=-1)
            primes.push_back(i);
    }
}
void creategraph()
{
    int l=primes.size();
    for(int i=0;i<=l-1;i++)
    {
        int n=primes[i];
        for(int j=1;j<=4;j++)
        {
            for(int k=0;k<=9;k++)
            {
                if(j==1 && k==0)
                    continue;
                int unit= n%10;
                int ten= (n/10)%10;
                int hund= (n/100)%10;
                int thous= n/1000;
                if(j==1)
                {
                    if(thous==k)
                        continue;
                    else
                        thous=k;
                }
                if(j==2)
                {
                    if(hund==k)
                        continue;
                    else
                        hund=k;
                }
                if(j==3)
                {
                    if(ten==k)
                        continue;
                    else
                        ten=k;
                }
                if(j==4)
                {
                    if(unit==k)
                        continue;
                    else
                        unit=k;
                }
                int final=thous*1000+hund*100+ten*10+unit;
                if(binary_search(primes.begin(),primes.end(),final))
                        graph[primes[i]].push_back(final);
            }
        }
    }
}
void bfs(int start)
{
    vector<bool>vis(10010);
    queue<int>q;
    q.push(start);
    vis[start]=true;
    dist[start]=0;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(vector<int>::iterator it=graph[v].begin();it!=graph[v].end();it++)
        {
            if(!vis[*it])
            {
                vis[*it]=true;
                dist[*it]=dist[v]+1;
                q.push(*it);
            }
        }
    }
}  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    sieve();
    creategraph();
    while(T--)
    {
        int num1,num2;
        cin>>num1>>num2;
        /*for(vector<int>::iterator it = graph[8179].begin();it!=graph[8179].end();it++)
        {
           cout<<*it<<" ";
        }*/
        bfs(num1);
        if(dist[num2]==numeric_limits<int>::max())
            cout<<"Impossible"<<endl;
        else
            cout<<dist[num2]<<endl;
        //for(int i=0;i<=10009;i++)
         //   vis[i]=false;
        for(int i=0;i<=10009;i++)
            dist[i]=numeric_limits<int>::max();
    }
    return 0;
}
        

