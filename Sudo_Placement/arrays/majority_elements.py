def majority(arr, n):
    m = {}
    for i in range(n):
        if arr[i] in m:
            m[arr[i]] += 1
        else:
            m[arr[i]] = 1
    
    count = 0
    for key in m:
        if m[key] > n/2:
            count = 1
            return key
            break
    if(count==0):
        return -1

if __name__ == "__main__":
    tc = int(input())
    while tc>0:
        n = int(input())
        arr = list(map(int, input().split()))
        ans = majority(arr, n)
        print(ans)
        tc -= 1
