# Nahin the Coder
# Date : 28 - 07 - 2021


testcase = int(input())
while testcase > 0:
    st = input()
    n = len(st)
    if st[0] == st[n-1]:
        print("NO")
    else:
        opening = int(0)
        closing = int(0)
        for i in range(n):
            if st[0] == st[i]:
                opening = opening + 1
            else:
                opening = opening - 1
            if opening < 0:
                break
        for i in range(n):
            if st[n-1] == st[i]:
                closing = closing - 1
            else:
                closing = closing + 1
            if closing < 0:
                break
        if closing == 0 or opening == 0:
            print("YES")
        else:
            print("NO")
    testcase = testcase - 1
    
