def makeAnagram(a, b): 
    buffer = [0] * 26
    for char in a: 
        buffer[ord(char) - ord('a')] += 1
    for char in b: 
        buffer[ord(char) - ord('a')] -= 1
    return sum(map(abs, buffer)) 
  
# Driver Code 
if __name__ == "__main__" :  
  
    str1 = "bcadeh"
    str2 = "hea"
    print(makeAnagram(str1, str2)) 
