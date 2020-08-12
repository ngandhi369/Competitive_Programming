n = int(input())

c = ['*','.','.']

for i in range(n):
    x, y = input().split()
    for j in range(int(x)*2 + int(x) + 1):
        l = 0
        for k in range(int(y)*2 + int(y) + 1):
            if j%3 == 0:
                print('*',end="")
            else:
                print(c[l%3],end="")
                l += 1
        print('')
    print('')
