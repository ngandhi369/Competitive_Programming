n = int(input())
s = []# this is for only score containing
x = []
for _ in range(n):
    a = []
    for i in range(2):                          #it runs two times(0 & 1)
        if i == 0:                              #at first iter
            a.append(input())
        else:                                   #at second iter
            score = float(input())
            a.append(score)
            s.append(score)
    x.append(a)
s.sort()                                        #score is sorted
x.sort()                                        #whole list sorted
s = list(dict.fromkeys(s))
for i in range(0,n):
    if s[1] == x[i][1]:
        print(x[i][0])
