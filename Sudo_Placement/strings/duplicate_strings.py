# http://www.ardendertat.com/2012/01/06/programming-interview-questions-25-remove-duplicate-characters-in-string/

def removeDup(string):
	result = []
	seen = set()
	for char in string:
		if char not in seen:
			seen.add(char)
			result.append(char)
	return ''.join(result)

if __name__ == "__main__":
	inp = input()
	print(removeDup(inp))
