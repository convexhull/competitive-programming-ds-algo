#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	long double u, v, w, U, V, W, u1, v1, w1, volsq, vol;
    cin>>t;
	while(t--)
	{
	    cin>>u>>v>>w>>W>>V>>U;
		u1 = v*v + w*w - U*U;
		v1 = w*w + u*u - V*V;
		w1 = u*u + v*v - W*W;
		volsq = 4.0*u*u*v*v*w*w - u*u*u1*u1 - v*v*v1*v1 - w*w*w1*w1 + u1*v1*w1;
		vol = sqrt(volsq) / 12.0;
		cout<<setprecision(14)<<vol<<endl;
	}
	return 0;
}
