#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int x,y,z;
	cin>>x>>y>>z;
	vector<int>X(x),Y(y),Z(z);
	for(int i=0;i<=x-1;i++)
		cin>>X[i];
	for(int i=0;i<=y-1;i++)
		cin>>Y[i];
	for(int i=0;i<=z-1;i++)
		cin>>Z[i];
	sort(X.begin(),X.end());
	sort(Y.begin(),Y.end());
	sort(Z.begin(),Z.end());
	vector<int>sumx(x);
	sumx[0]=X[0];
	for(int i=1;i<=x-1;i++)
		sumx[i]=sumx[i-1]+X[i];
	vector<int>sumz(z);
	sumz[0]=Z[0];
	for(int i=1;i<=z-1;i++)
		sumz[i]=sumz[i-1]+Z[i];
	int sum=0;
	int px,py,pz;
	px=py=pz=0;
	for(int i=0;i<=y-1;i++)
	{
		while(X[px]<=Y[i] && px<=x-1)
			px++;
		px--;//!!!
		while(Z[pz]<=Y[i] && pz<=z-1)
			pz++;
		pz--;
		sum += ( Y[i]*( (px+1)*(pz+1)*Y[i] + (px+1)*sumz[pz] ) + sumx[px]*( (pz+1)*Y[i]+sumz[pz] ) );	
	}
	cout<<sum<<endl;
	return 0;
}