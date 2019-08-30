# http://www.ardendertat.com/2011/12/20/programming-interview-questions-23-find-word-positions-in-text/

def getWords(text):
   return re.sub(r'[a-z0-9]', text.lower().split())

def createIndex(text):
   index = collections.defaultdict(list)
   words = getWords(text)
   for pos, word in enumerate(words):
       index[word].append(pos)
   return index

def queryIndex(index, word):
	if word in index:
		return index[word]
	else
		return []
