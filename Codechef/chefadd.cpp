#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long T;
    cin>>T;
    v.resize(1000000010);
    for(long long i=1;i<=100000;i++)
    {
        bitset<30>bs = i;
        v[i] = bs.count();
    }
    while(T--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long ca = v[a] , cb = v[b];
        long long cnt = 0;
        for(long long i=1;i<c;i++)
        {
            long long sub = i;
            long long pred = c-i;
            if(v[sub]==v[a] && v[pred] == v[b])
                cnt ++;
        }
        cout<<cnt<<endl;       
    }
	return 0;
}

