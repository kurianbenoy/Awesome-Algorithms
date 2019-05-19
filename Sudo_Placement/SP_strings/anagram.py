def check(s1, s2):
    if(sorted(s1) == sorted(s2)):
        print("YES")
    else:
        print("NO")
        
T = int(input())
for i in range(T):
    str = input()
	a = str.split()
	s1 = a[0]
	s2 = a[1]
	check(s1, s2)
