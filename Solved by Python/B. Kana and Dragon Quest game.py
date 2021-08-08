# Nahin the Coder
# Date : 07 - 08 - 2021


testcase = int(input())
while testcase > 0:
    x, n, m = map(int, input().split())
    temp = int(x)
    temp_M = m
    flag = bool(0)
    while n > 0:
        x = x//2 + 10
        if temp_M > 0:
            temp = temp - 10
            temp_M = temp_M - 1
        if temp <= 0:
            print("YES")
            flag = 1
            testcase = testcase - 1
            break
        n = n-1
    if flag == 1:
        continue
    if x-m*10 <= 0:
        print("YES")
    else:
        print("NO")
    testcase = testcase - 1
