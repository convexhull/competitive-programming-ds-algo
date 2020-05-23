T = int(input())
while(T>0):
    n = int(input())
    matrix = list()
    for i in range(n):
        matrix.append( list(map(int,input().split())))
    for i in matrix:
        i.sort()
    picked = matrix[n-1][n-1]
    ans = picked
    flag = True
    for i in reversed(range(n-1)):
        for j in reversed(range(n)):
            if(matrix[i][j]<picked):
                ans = ans + matrix[i][j]
                picked = matrix[i][j]
                break
            if(j==0):
                flag = False
    if(not flag):
        print(-1)
    else:
        print(ans)
    T = T-1
