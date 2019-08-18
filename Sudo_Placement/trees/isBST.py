class Node:
    def __init__(self, val=None):
        self.left, self.right, self.val = None, None, val
 
INFINITY = float("infinity")
NEG_INFINITY = float("-infinity")
 
def isBST(tree, minVal=NEG_INFINITY, maxVal=INFINITY):
    if tree is None:
        return True
 
    if not minVal <= tree.val <= maxVal:
        return False
 
    return isBST(tree.left, minVal, tree.val) and \
           isBST(tree.right, tree.val, maxVal)

# If a tree is a binary search tree, then traversing the tree inorder should lead to sorted order of the values in the tree. So, we can perform an inorder traversal and check whether the node values are sorted or not. Here is the code:
def isBST2(tree, lastNode=[NEG_INFINITY]):
    if tree is None:
        return True

    if not isBST2(tree.left, lastNode):
        return False

    if tree.val < lastNode[0]:
        return False

    lastNode[0]=tree.val

    return isBST2(tree.right, lastNode)
