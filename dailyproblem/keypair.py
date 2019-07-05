def printPairs(arr,n,k):
	s = set()
	l = 0
	for i in range(0,n):
		temp = k-arr[i]
		if(temp in s):
			print("(",arr[i],temp,")")
			l=1
	s.add(arr[i])
	for i in range(n):
			print(s[i])
	if(l==0):
		print("No")
	else:
		print("Yes")

if __name__ == "__main__":
	n = int(input())
	k = int(input())
	A = []
	p = input().split()
	for i in p:
	    A.append(int(i))
	
	printPairs(A,n,k)

