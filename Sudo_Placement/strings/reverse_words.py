# Reverse words in string
# http://www.ardendertat.com/2011/10/31/programming-interview-questions-12-reverse-words-in-a-string/
def reverseWords3(text):
    words=[]
    length=len(text)
    space=set(string.whitespace)
    index=0
    while index<length:
        if text[index] not in space:
            wordStart=index
            while index<length and text[index] not in space:
                index+=1
            words.append(text[wordStart:index])
        index+=1
 
    print " ".join(reversed(words))

def reverseWords4(text):
    words=text[::-1].split()
    print " ".join([word[::-1] for word in words])
