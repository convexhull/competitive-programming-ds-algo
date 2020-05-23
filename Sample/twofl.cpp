#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
        cin>>v[i];
    vector<int>ans(n+1);
    vector<int>chainl(n+1);
    int chaincnt = 0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]==v[i-1])
        {
            chaincnt++;
            chainl[i] = chaincnt;
        }
        else
        {
            chaincnt = 1;
            chainl[i] = chaincnt;
        }
    }
    vector<int>pres;
    for(int i=1;i<n+1;i++)
    {
        if(pres.size()<2)
        {
            ans[i] = ans[i-1] + 1;
            if(i==1 || v[i]!=v[i-1])
                pres.push_back(v[i]);
        }
        else 
        {
            if(find(pres.begin(),pres.end(),v[i])!=pres.end())
                ans[i] = ans[i-1] + 1;
            else
            {
                ans[i] = chainl[i-1]+1;
                pres.clear();
                pres.push_back(v[i]);
                pres.push_back(v[i-1]);
            }
        }
    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;     
	return 0;
}

