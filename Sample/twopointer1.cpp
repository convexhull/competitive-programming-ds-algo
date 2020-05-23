#include<bits/stdc++.h>
using namespace std;
void checker(vector<int> &v, int given)
{
	int left,right;
	left=0;
	right= (int)v.size()-1 ;
	int sum=0;
	while(left<right)
	{
		sum=v[left]+v[right];
		cout<<sum<<endl;
		if(sum==given)
		{
			cout<<left<<" "<<right<<endl;
			return ;
		}
		if(sum<given)
			left++;
		if(sum>given)
			right--;
		if(right-left==1)
		{
			cout<<"!"<<endl;
			return ;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<=n-1;i++)
		cin>>v[i];
	int sum;
	cin>>sum;
	checker(v,sum);
	return 0;
}