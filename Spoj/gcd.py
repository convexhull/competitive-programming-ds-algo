def gcd(x,y):
	if x==0 :
		return y
	return gcd(y%x,x)
T=int(input())
while T!=0:
	a,b=map(int,input().split())
	c=max(a,b)
	d=min(a,b)
	print(gcd(c,d))
	T-=1