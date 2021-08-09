# Nahin the Coder
# Date : 09 - 08 - 2021


testcase = int(input())
while testcase > 0:
    n = int(input())
    tempo = int(0)
    cost = int(0)
    rem = int(0)
    while n >= 10:
        rem = n//10
        tempo = rem*10
        n = n - tempo
        cost = cost + tempo
        n = n + rem
    print(cost+n)
    testcase = testcase - 1
