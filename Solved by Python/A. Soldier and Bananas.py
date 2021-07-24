# Nahin The Coder
# Date : 20 - 07 - 2021

k, n, w = map(int, input().split())

start = int(1)
counter = int(0)
while start <= w:
    counter = counter + int(start * k)
    start = start + 1

if counter <= n:
    print(0)
else:
    print(counter - n)
