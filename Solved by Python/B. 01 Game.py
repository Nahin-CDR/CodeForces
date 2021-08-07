# Nahin the Coder
# Date : 07 - 08 - 2021


testcase = int(input())
while testcase > 0:
    one = int(0)
    zero = int(0)
    s = input()
    size = len(s)
    for i in s:
        if i == '0':
            zero = zero + 1
        else:
            one = one + 1
    if one % 2 != 0 and zero >= one:
        print("DA")
    elif zero % 2 != 0 and one >= zero:
        print("DA")
    elif one == zero and one % 2 != 0:
        print("DA")
    else:
        print("NET")
    testcase = testcase - 1
