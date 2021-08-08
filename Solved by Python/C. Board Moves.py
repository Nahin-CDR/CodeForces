# Nahin the Coder
# Date : 07 - 08 - 2021


testcase = int(input())
while testcase > 0:
    n = int(input())
    counter = int(1)
    xy = int(8)
    result = int(0)
    if n == 1:
        print(0)
        testcase = testcase - 1
        continue
    else:
        i = int(3)
        while i <= n:
            result = result + xy*counter
            counter = counter + 1
            xy = 8*counter
            i = i+2
        print(result)
    testcase = testcase - 1
