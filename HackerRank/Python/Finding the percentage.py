N = int(input())
dictionary = {} 
for i in range(0, N): 
    inputArray = input().split() # this will take whole array
    marks = list(map(float, inputArray[1:]))
    #converts indices 1->end of inputArray to floats, puts them in a list
    dictionary[inputArray[0]] = sum(marks)/float(len(marks))

print("%.2f" % dictionary[input()])
