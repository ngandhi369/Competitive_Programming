def getSum(n):
    sum = 0
    while (n > 0):
        sum += int(n % 10)
        n = int(n / 10)
    return sum

t = int(input())

for _ in range(0,t):
    n = int(input())
    c = 0
    m = 0
    for i in range(0,n):
        a,b = list(map(int,input().split()))

        s_a = getSum(int(a))
        s_b = getSum(int(b))

        if s_a > s_b:
            c += 1
        elif s_a < s_b:
            m += 1
        else:
            c += 1
            m += 1

    if c > m:
        print(0 ,c)
    elif c < m:
        print(1 ,m)
    else:
        print(2 ,c)
