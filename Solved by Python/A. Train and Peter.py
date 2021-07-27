# Nahin the Coder
# Date : 27 - 07 - 2021

s1 = input()
s2 = input()
s3 = input()

forward = bool(0)
backward = bool(0)

if s1.find(s2) != -1:
    if s1.find(s3, s1.find(s2) + len(s2)) != -1:
        forward = 1

bb = s1[::-1]

if bb.find(s2) != -1:
    if bb.find(s3, bb.find(s2) + len(s2)) != -1:
        backward = 1
if forward == 1 and backward == 1:
    print("both")
    exit()
if forward == 1:
    print("forward")
    exit()
if backward == 1:
    print("backward")
    exit()
print("fantasy")


