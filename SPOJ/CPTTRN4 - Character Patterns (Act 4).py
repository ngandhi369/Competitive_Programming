
for _ in range(int(input())):
    a, b, c, d = map(int,input().split())
    for i in range(a*c + a+1):
        if i % (c+1) == 0:
            for _ in range(b*d + (b+1)):
                print('*',end="")
            print('')
        else:
            for j in range(b):
                print('*',end="")
                for _ in range(d):
                    print('.',end="")
            print('*')
    print('')