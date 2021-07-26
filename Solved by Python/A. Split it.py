# Nahin The Coder
# Date : 25 - 07 - 2021

start = int(input())
for i in range(start):
    n, k = map(int, input().split())
    p = int(n)
    st = input()
    counter = int(0)
    for j in range(n):
        n = n - 1
        if st[j] == st[n]:
            counter = counter + 1
        else:
            break
    if counter >= k:
        if p - (k * 2) > 0:
            print("Yes")
        else:
            print("No")
    else:
        print("No")
