from collections import Counter
t = int(input())
for _ in range(t):
    n = int(input())
    s = ""
    for i in range(n):
        s = s + input()

    count = Counter(s)
    count = count.values()

    flag = 0
    for i in count:
        if i%n!=0:
            flag=1;
            break
    if flag == 1:
        print('NO')
    else:
        print('YES')
