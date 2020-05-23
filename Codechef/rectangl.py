#For God's sake python don't get caught for plagiarism
T = int(input())
while(T!=0):
    l = list(map(int,input().split()))
    l.sort();
    if(l[0]==l[1] and l[2]==l[3]):
        print("YES")
    else:
        print("NO")
    T = T-1
#Just typing this useless shit in hope to avoid shitty plagiarism penalty