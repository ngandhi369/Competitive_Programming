t = int(input())

for _ in range(t):
    i = int(input())

    x = 0
    while i % 10 == 0:
        i=i/10
        x += 1

    y = 0
    while i % 2 == 0:
        i = i / 2
        y += 1

    if i==1 and (x >= y):
        print("Yes")
    else:
        print("No")

