t = int(input())
for i in range(0,t):#t
    n = int(input())
    s = list(map(int,input().split()))
    sum = 0
    for k in range(0,n-1):
        if s[k+1]>s[k]:
            sum += s[k + 1] - s[k]-1
        else:
            sum += s[k]-s[k+1]-1
    print(sum)



