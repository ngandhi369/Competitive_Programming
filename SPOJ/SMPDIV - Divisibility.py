m = int(input())
for i in range(m):
    n, x, y = input().split()
    for j in range(1,int(n)+1):
        if j%int(x) == 0 and j%int(y) != 0:
            print(j,end=" ")
    print('')