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
		vector<long long>hap(n);
		for(long long i=0;i<=n-1;i++)
			cin>>hap[i];
		sort(hap.rbegin(),hap.rend());
		long long last=-1;
		for(long long i=0;i<=n-1;i++)
		{
			if(hap[i]<0)
			{
				last=i-1;
				break;
			}
			if(i==n-1)
				last=i;
		}
		//cout<<last<<endl;
		if(last!=-1)
		{
			long long sum=accumulate(hap.begin(),hap.begin()+last+1,(long long)0);
			long long ans=sum*(last+1);
			//cout<<ans<<endl;
			long long cnt=last+1;
			long long critical=n;
			for(long long i=last+1;i<=n-1;i++)
			{
				cnt++;
				if( (sum+hap[i])*cnt < ans )
				{
					critical=i;
					break;
				}
				ans=(sum+hap[i])*cnt;
				sum += hap[i];
			}
			long long neg=0;
			if(last==n-1)
				critical=n;
			for(long long i=critical;i<=n-1;i++)
				neg+=hap[i];
			//cout<<critical<<endl;
			//cout<<ans<<endl;
			cout<<ans+neg<<endl;
		}
		else
		{
			cout<<accumulate(hap.begin(),hap.end(),(long long)0)<<endl;
		}
	}
	return 0;
}