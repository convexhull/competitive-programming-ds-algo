#include<bits/stdc++.h>
using namespace std;
long double predicate(long double t, long double px, long double py, long double pz, long double qx, long double qy, long double qz, long double dx, long double dy, long double dz, long double cx, long double cy, long double cz )
{
    long double num = pow((qx + t * dx - px) * (cx - px) + (qy + t * dy - py) * (cy - py) + (qz + t * dz - pz) * (cz - pz) , 2) ;
    long double den1 = (qx + t * dx - px)*(qx+t*dx-px) + (qy + t * dy - py) * (qy+t*dy-py)  + (qz + t * dz - pz) *(qz+t*dz-pz)  ;
    long double den2 =(cx - px) * (cx-px) + (cy - py) * (cy-py) + (cz - pz) * (cz-pz)   ;
    num/=den1;
    num/=den2;
    return sqrtl(num);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        long double px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r;
        cin>>px>>py>>pz>>qx>>qy>>qz>>dx>>dy>>dz>>cx>>cy>>cz>>r;
        long double targetnum = r*r;
        long double targetden = (cx-px)*(cx-px) + (cy-py)*(cy-py) + (cz-pz)*(cz-pz);
        long double target =  sqrtl(1.0 - targetnum/targetden)  ;
        long double lo = 0, hi = 1e9+10;
        while(fabsl(hi-lo)>0.0000001)
        {
            long double mid = (lo+hi)/2;
            if(predicate(mid,px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz) >= target )
                lo = mid;
            else if(predicate(mid,px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz)<target)
                hi = mid;
        }
        cout<<fixed<<setprecision(6)<<lo<<endl;
    }
	return 0;
}


