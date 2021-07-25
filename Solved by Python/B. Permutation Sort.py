#Nahin the Coder
#Date : 25 - 07 - 2021


testcase = int(input())

while testcase>0 :
    size = int(input())
    myList = list(map(int,input().strip().split()))[:size]
    if(myList == sorted(myList)) :
        print(0)
    else :
        tempList = myList.copy()
        tempList.sort()
        first = tempList[0]
        last = tempList[size-1]
        if( first == myList[0] or last == myList[size-1] ) :
            print(1)
        elif( last == myList[0] and first == myList[size-1] ) :
            print(3)
        else :
            print(2)
    testcase = testcase - 1
