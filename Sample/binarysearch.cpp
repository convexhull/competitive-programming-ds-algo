#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int x;
int b_s(int lo,int hi)
{
	int mid=(lo+hi)/2;
	if(v[mid]==x)
		return mid;
	if(lo==hi)
		return -1;
	if(v[mid]<x)
		return b_s(lo,mid-1);
	else
		return b_s(mid+1,hi);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	v.resize(n);
	for(int i=0;i<=n-1;i++)
		cin>>v[i];
	cin>>x;
	if(b_s(0,n-1)==-1)
		cout<<"Element not found master!!"<<endl;
	else
		cout<<"Element found at index: "<<b_s(0,n-1)<<endl;
	return 0;
}