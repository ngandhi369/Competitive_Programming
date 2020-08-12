n,m = map(int,input().split(' '))

arr = list(map(int, input().split()))
#arr = [int(i) for i in input().split()]        its also working

a = set(map(int,input().split()))
b = set(map(int,input().split()))

happiness=0

for i in arr:
    if i in a:
        happiness += 1
    if i in b:
        happiness -= 1

print(happiness)
