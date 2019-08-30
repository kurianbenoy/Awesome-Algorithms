# http://www.ardendertat.com/2012/01/17/programming-interview-questions-26-trim-binary-search-tree/

def trimBST(tree, minVal, maxVal):
    if not tree:
        return
    tree.left=trimBST(tree.left, minVal, maxVal)
    tree.right=trimBST(tree.right, minVal, maxVal)
    if minVal<=tree.val<=maxVal:
        return tree
    if tree.val<minVal:
        return tree.right
    if tree.val>maxVal:
        return tree.left
