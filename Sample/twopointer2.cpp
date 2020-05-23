#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> &a, vector<int> &b)
{
	int first,second;
	first=second=0;
	int marker=0;
	int n=a.size();
	int m=b.size();
	vector<int> arr(n+m);
	while(first<n && second<m)
	{
		if(a[first]<=b[second])
		{
			arr[marker]=a[first];
			first++;
			marker++;
		}
		else
		{
			arr[marker]=b[second];
			second++;
			marker++;
		}
	}
	while(first<n || second<m)
	{
		if(first<n)
		{
			arr[marker++]=a[first];
			first++;
		}
		if(second<m)
		{
			arr[marker++]=b[second];
			second++;
		}
	}
	return arr;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n),b(m);
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	for(int i=0;i<=m-1;i++)
		cin>>b[i];
	vector<int> arr=merge(a,b);
	for(int i=0;i<=n+m-1;i++)
		cout<<arr[i]<<" ";
	return 0;
}	