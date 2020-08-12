n = int(input())
arr = []

for i in range(0,n):
    a = input().split()                     #takes whole input

    if a[0] == "insert":
        arr.insert(int(a[1]),int(a[2]))

    elif a[0] == "print":
        print(arr)

    elif a[0] == "sort":
        arr.sort()

    elif a[0] == "remove":
        arr.remove(int(a[1]))

    elif a[0] == "append":
        arr.append(int(a[1]))

    elif a[0] == "reverse":
        arr.reverse()

    elif a[0] == "pop":
        arr.pop()
