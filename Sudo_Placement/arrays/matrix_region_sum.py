def precomputeSums(matrix):
    topRow, bottomRow=(0, len(matrix)-1)
    leftCol, rightCol=(0, len(matrix[0])-1)
    sums=[[0]*(rightCol-leftCol+1) for i in range(bottomRow-topRow+1)]
    sums[topRow][leftCol]=matrix[topRow][leftCol]
 
    for col in range(leftCol+1, rightCol+1):
        sums[topRow][col]=sums[topRow][col-1]+matrix[topRow][col]
    for row in range(topRow+1, bottomRow+1):
        sums[row][leftCol]=sums[row-1][leftCol]+matrix[row][leftCol]
 
    for col in range(leftCol+1, rightCol+1):
        columnSum=matrix[topRow][col]
        for row in range(topRow+1, bottomRow+1):
            sums[row][col]=sums[row][col-1]+matrix[row][col]+columnSum
            columnSum+=matrix[row][col]
 
    return sums

def matrixRegionSum2(matrix, A, D, sums):
    if len(matrix)==0:
        return
 
    if A[0]==0 or A[1]==0:
        OA=0
    else:
        OA=sums[A[0]-1][A[1]-1]
 
    if A[1]==0:
        OC=0
    else:
        OC=sums[D[0]][A[1]-1]
 
    if A[0]==0:
        OB=0
    else:
        OB=sums[A[0]-1][D[1]]
 
    OD=sums[D[0]][D[1]]
 
    return OD-OB-OC+OA
