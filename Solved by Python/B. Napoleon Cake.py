# Nahin The Coder
# Date : 25 - 07 - 2021

test = int(input())
while test > 0:
    n = int(input())
    myList = list(map(int, input().strip().split()))[:n]
    temp = int(myList[n-1])
    i = int(n-1)
    while i >= 0:
        if myList[i] > 0:
            temp = max(myList[i], temp)
        if temp > 0:
            myList[i] = 1
            temp = temp - 1
        else:
            myList[i] = 0
        i = i-1
    print(*myList)
    test = test - 1

