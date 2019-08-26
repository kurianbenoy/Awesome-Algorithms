#Given an integer array, one element occurs even number of times and all others have odd occurrences. Find the element with even occurrences.
# works in python2 only( written when 4 months 5 days and 2 hours to EOL)

from functools import reduce

def getEven2(arr):
	return reduce(lambda x, y: x^y, arr+list(set(arr)))

arr = list(input())
print getEven2(arr)

