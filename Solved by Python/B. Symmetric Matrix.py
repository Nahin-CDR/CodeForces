# Nahin the Coder
# Date : 10 - 08 - 2021


testcase = int(input())
while testcase > 0:
    n, m = map(int, input().split())
    i = int(1)
    flag = bool(0)
    while i <= n:
        a, b = map(int, input().split())
        c, d = map(int, input().split())
        if b == c:
            flag = 1
        i = i + 1
    if m % 2 != 0 or flag == 0:
        print("NO")
    else:
        print("YES")
    testcase = testcase - 1

