# Nahin the Coder
# Date : 02 - 08 - 2021


testcase = int(input())
while testcase > 0:
    n = int(input())
    if n // 2020 >= n % 2020:
        print("YES")
    else:
        print("NO")
    testcase = testcase - 1
