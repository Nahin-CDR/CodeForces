# Nahin the Coder
# Date : 26 - 07 - 2021

n = int(input())
st = input()
if n == 1:
    if st[0] != '?':
        print("No")
        exit()
    print("Yes")
    exit()
if n == 2:
    if st[0] == st[1] and st[0] == '?':
        print("Yes")
        exit()
    if st[0] != st[1]:
        if st[0] != '?' and st[1] != '?':
            print("No")
            exit()
        print("Yes")
        exit()
    print("No")
    exit()
if n == 3:
    if st[0] != st[2] and st[1] == '?':
        if st[0] == '?' or st[2] == '?':
            print("Yes")
            exit()
        else:
            print("No")
            exit()

    if st[0] == st[1] and st[0] == '?':
        print("Yes")
        exit()

    if st[1] == st[2] and st[2] == '?':
        print("Yes")
        exit()

    if st[0] == '?' and st[2] == '?':
        print("Yes")
        exit()

    if st[0] == '?':
        if st[1] != st[2]:
            print("Yes")
            exit()
        if st[1] == st[2] and st[1] == '?':
            print("Yes")
            exit()
        print("No")
        exit()

    if st[2] == '?':
        if st[0] != st[1]:
            print("Yes")
            exit()
        else:
            print("No")
            exit()
    print("No")
    exit()

cnt = int(0)
passed = bool(0)

i = int(0)

while i < n:
    if i+1 <= n-1:
        if st[i] != '?' and st[i] == st[i+1]:
            print("No")
            exit()
    if i == 0 and st[i] == '?':
        passed = 1
    if i != 0 and st[i] == '?':
        if i+1 <= n-1:
            if st[i-1] == st[i+1]:
                passed = 1
            if st[i] == st[i+1]:
                passed = 1
    i = i+1
if passed == 1:
    print("Yes")
else:
    print("No")
