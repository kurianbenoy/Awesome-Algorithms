def reverseNum(x):
    s = str(x)
    s = s[::-1]
    return int(s);

def isMystery(n):
    for i in range(1, n//2+1):
        j = reverseNum(i)

        if i+j ==n:
            print(i,j)
            return 1
    print("Not a mystery no")
    return 0

n = int(input())
isMystery(n)

