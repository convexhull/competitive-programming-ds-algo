n=int(input())
v=list(map(int,input().split()))
total=sum(v)
if n%total==0:
    for i in range