n = int(input())

for i in range(n):
    x, y = input().split()
    for j in range(int(x)):
        for k in range(int(y)):
            if j==0 or j==int(x)-1 or k==0 or k==int(y)-1:
                print('*',end="")
            else:
                print('.',end="")
        print('')
    print('')
