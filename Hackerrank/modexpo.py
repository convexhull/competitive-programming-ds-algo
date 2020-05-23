def func(base,exp):
	result=1;
	while(exp>0):
		if(y & 1):
			result*=x;
		y>>=1;
		x=x*x;
	return result;
a,b,c=map(int,input.split())
p=1000000007
z=func(b,c,p-1)
ans=func(a,z,p)
print(ans)

