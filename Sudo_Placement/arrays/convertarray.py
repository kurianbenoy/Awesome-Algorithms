def convertArray(arr):
    N=len(arr)/3
    for currentIndex in range(len(arr)):
        swapIndex=getIndex(currentIndex, N)
        while swapIndex<currentIndex:
            swapIndex=getIndex(swapIndex, N)
        arr[currentIndex], arr[swapIndex] = arr[swapIndex], arr[currentIndex]
