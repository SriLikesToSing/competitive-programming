# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
       z = ListNode(None, head) 
       l = z
       r = head
       cnt = 0
       while n > 0 and r:
           r=r.next
           n=n-1
    
       while r:
           r=r.next
           l=l.next
        
       l.next=l.next.next
       return z.next








