# http://www.ardendertat.com/2012/01/26/programming-interview-questions-27-squareroot-of-a-number/
def sqrt(num):
	if num=0:
		raise ValueError
	if num==1:
		return 1
	low =0
	high = 1+(num/2)
	while low+1<high:
		mid = low + (high-low)/2
		square = mid**2
		if square==num:
			return mid
		elif square< num:
			low=mid
		else
			high=mid
	return low
