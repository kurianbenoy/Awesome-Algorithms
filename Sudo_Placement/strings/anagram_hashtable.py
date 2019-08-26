import collections
import string

def getLetters(text):
	return [char.lower() for char in text if char in string.ascii_letters]

def isAnagram(str1, str2):
	str1, str2 = getLetters(str1), getLetters(str2)
	if len(str1) != len(str2):
		return False

	counts = collections.defaultdict(int)
	for letter in str1:
		counts[letter]+=1
	for letter in str2:
		counts[letter]-=1
		if counts[letter]<0:
			return False
	return True

T = int(input())
for i in range(T):
	str1 = input()
	a = str1.split()
	s1 = a[0]
	s2 = a[1]
	print(isAnagram(s1, s2))

