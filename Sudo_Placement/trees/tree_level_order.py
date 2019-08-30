#http://www.ardendertat.com/2011/12/05/programming-interview-questions-20-tree-level-order-print/
# Given a binary tree of integers, print it in level order. The output will contain space between the numbers in the same level, and new line between different levels. 

class Node:
    def __init__(self, val=None):
        self.left, self.right, self.val = None, None, val

def levelOrderPrint(tree):
    if not tree:
        return
    nodes=collections.deque([tree])
    currentCount, nextCount = 1, 0
    while len(nodes)!=0:
        currentNode=nodes.popleft()
        currentCount-=1
        print (currentNode.val)
        if currentNode.left:
            nodes.append(currentNode.left)
            nextCount+=1
        if currentNode.right:
            nodes.append(currentNode.right)
            nextCount+=1
        if currentCount==0:
            #finished printing current level
            print('\n')
            currentCount, nextCount = nextCount, currentCount
