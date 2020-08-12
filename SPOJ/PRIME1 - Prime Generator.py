from math import sqrt

for _ in range(int(input())):
    m, n = map(int,input().split())
    d = {}
    for i in range(2,int(sqrt(n)+1)):
        for j in range(max(m//i,2),n//i+1):
            d[i*j]=1

    for i in range(max(2,m),n+1):
        if i not in d:
            print(i)
    print('')
