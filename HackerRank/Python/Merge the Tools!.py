def merge_the_tools(string, k):
   for i in range(int(len(string)/k)):
    t = ''
    for x in string[i * k : (i + 1) * k]:
        if x in t:
            continue
        t += x
    print(t)

