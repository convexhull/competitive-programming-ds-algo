T = int(input())
for _ in range(0, T):
    x, y, z = map(int, input().split())
    X = list(map(int, input().split()))
    Y = list(map(int, input().split()))
    Z = list(map(int, input().split()))
    x=x+1
    z=z+1
    X.insert(0,0)
    Z.insert(0,0)
    X.sort()
    Y.sort()
    Z.sort()
    sumx=list()
    sumx.append(0)
    for i in range(1,x):
        sumx.append(sumx[i-1]+X[i])
    #print(sumx)
    sumz = list()
    sumz.append(0)
    for i in range(1, z):
        sumz.append(sumz[i-1] + Z[i])
    #print(sumz)
    sum = 0
    px=1
    py=1
    pz=1
    for i in range(y):
        while X[px] <= Y[i] and px <= x-1 :
            px=px+1
            if px == x:
                break
        px=px-1
        while Z[pz] <= Y[i] and pz <= z-1 :
            pz=pz+1
            if pz == z:
                break
        pz=pz-1
        sum += (Y[i] * ((px) * (pz) * Y[i] + (px) * sumz[pz]) + sumx[px] * ((pz) * Y[i] + sumz[pz]))
    print(sum%1000000007)







