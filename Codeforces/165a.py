n=int(input())
v=list(map(int,input().split()))
five=v.count(5)
zero=v.count(0)
if zero == 0:
    print(-1)
else:
    flag=0
    for i in range( int ( five/9 ) * 9):
        print(5,end='')
        if(int(five/9)>0):
            flag = 1
    if(flag):
        for i in range(zero):
            print(0, end='')
    else:
        print(0)

