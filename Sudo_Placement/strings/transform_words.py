# Given a source word, target word and an English dictionary, transform the source word to target by
 #* changing/adding/removing 1 character at a time, while all intermediate words being valid English words. Return the
 #* transformation chain which has the smallest number of intermediate words.
 #http://www.ardendertat.com/2011/10/17/programming-interview-questions-8-transform-word*/

def constructGraph(dictionary):
    graph=collections.defaultdict(list)
    letters=string.lowercase
    for word in dictionary:
        for i in range(len(word)):
            #remove 1 character
            remove=word[:i]+word[i+1:]
            if remove in dictionary:
                graph[word].append(remove)
            #change 1 character
            for char in letters:
                change=word[:i]+char+word[i+1:]
                if change in dictionary and change!=word:
                    graph[word].append(change)
        #add 1 character
        for i in range(len(word)+1):
            for char in letters:
                add=word[:i]+char+word[i:]
                if add in dictionary:
                    graph[word].append(add)
 
    return graph

def transformWord(graph, start, goal):
    paths=collections.deque([ [start] ])
    extended=set()
    #Breadth First Search
    while len(paths)!=0:
        currentPath=paths.popleft()
        currentWord=currentPath[-1]
        if currentWord==goal:
            return currentPath
        elif currentWord in extended:
            #already extended this word
            continue

        extended.add(currentWord)
        transforms=graph[currentWord]
        for word in transforms:
            if word not in currentPath:
                #avoid loops
                paths.append(currentPath[:]+[word])

    #no transformation
    return []

if __name__ == "__main__":
	dicts = input()
	dicts.split()
	graph = constructGraph(dicts)
	print(transformWord(graph, 'cat', 'bed')
