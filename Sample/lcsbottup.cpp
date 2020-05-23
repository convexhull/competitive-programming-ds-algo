#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int lcs(int m, int n)
{
	vector< vector<int> > matrix(m+1,vector<int>(n+1));
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s1[i-1]==s2[j-1])
				matrix[i][j]=matrix[i-1][j-1]+1;
			else
				matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
		}
	}
	return matrix[m][n];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>s1>>s2;
	cout<<lcs(s1.length(),s2.length());
	return 0;
}