#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while(1)
    {
        int n1;
        cin>>n1;
        if(!n1)
        	break;
        vector<int>a(n1);
        for(int i=0;i<=n1-1;i++)
            cin>>a[i];
        int n2;
        cin>>n2;
        vector<int>b(n2);
        for(int i=0;i<=n2-1;i++)
            cin>>b[i];
        vector<int>meeta,meetb;
        for(int i=0;i<=n1-1;i++)
        {
            if(binary_search(b.begin(),b.end(),a[i]))
            {
                int idx=lower_bound(b.begin(),b.end(),a[i])-b.begin();
                meeta.push_back(i);
                meetb.push_back(idx);
            }
        }
        //for(int i=0;i<=meeta.size()-1;i++)
        //	cout<<meeta[i]<<" ";
        //cout<<endl;
        //for(int i=0;i<=meetb.size()-1;i++)
        	//cout<<meetb[i]<<" ";
        //cout<<endl;
        if(meeta.empty())
        {
        	int x=accumulate(a.begin(),a.end(),0);
        	int y=accumulate(b.begin(),b.end(),0);
        	cout<<max(x,y)<<endl;
        	continue;
        }
        int sum=0;
        vector<int>aval,bval;
        for(int i=0,j=0;i<=n1-1;i++)
        {
        	sum += a[i];
        	if(i==meeta[j])
        	{
        		aval.push_back(sum);
        		sum=0;
        		j++;
        	}
        }
        sum=0;
        for(int i=0,j=0;i<=n2-1;i++)
        {
        	sum += b[i];
        	if(i==meetb[j])
        	{
        		bval.push_back(sum);
        		sum=0;
        		j++;
        	}
        }
        //for(int i=0;i<=aval.size()-1;i++)
        //	cout<<aval[i]<<" ";
        //cout<<endl;
        //for(int i=0;i<=bval.size()-1;i++)
        //	cout<<bval[i]<<" ";
        //cout<<endl;
        int l=meeta.size();
        int alast=accumulate(a.begin()+ *(meeta.end()-1)+1,a.end(),0);
        int blast=accumulate(b.begin()+ *(meetb.end()-1)+1, b.end(),0);
        //cout<<"alast: "<<alast<<endl;
        //cout<<"blast:  "<<blast<<endl;
        int ans=0;
        for(int i=0;i<=l-1;i++)
        {
        	aval[i]>=bval[i] ? ans+=aval[i] : ans+=bval[i];
        }
        ans+=max(alast,blast);
        cout<<ans<<endl;
    }
    return 0;
}
