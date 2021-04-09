class ListNode:
    def __init__(self, val=0, next=None) -> None:
        self.val = val
        self.next = next

class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        length = 1
        current = head
        while current.next != None:
            length += 1
            current = current.next
        current = head
        for _ in range(length//2):
            current = current.next
          
        return current
