import collections

def findMissingNo(array1, array2):
    d = collections.defaultdict(int)
    for num in array2:
       d[num]+= 1
    for num in array1:
       if d[num] == 0:
	       return num
       else:
           d[num] -= 1

def findMissingNumber3(array1, array2):
    result=0
    for num in array1+array2:
        result^=num
    return result

n = input()
array1 = input()
array2 = input()
array1 = array1.split(' ')
array2 = array2.split(' ')

no = findMissingNo(array1, array2)
print(no)
