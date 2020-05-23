#include<bits/stdc++.h>
using namespace std;
vector<int> precomp()
{
    vector<int>prime;
    int start=30;
    for(int cnt=1;cnt<=1010; )
    {
        int num=start;
        int p=0;
        for(int i=2;i*i<=start;)
        {
            if(num%i==0)
            {
                p++;
                while(num%i==0)
                    num/=i;
            }
            i++;
        }
        if(num!=1)
            p+=1;
        if(p>2)
        {
            prime.push_back(start);
            cnt++;
        }
        start++;
    }
    return prime;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    vector<int>lucky=precomp();
    while(T--)
    {
        int n;
        cin>>n;
        cout<<lucky[n-1]<<endl;
    }
    return 0;
}

