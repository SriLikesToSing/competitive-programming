# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        s, f = head, head.next
        while f and f.next:
            s=s.next
            f=f.next.next
        
        secondHalf = s.next
        prev=s.next = None
        while secondHalf:
            tmp=secondHalf.next
            secondHalf.next=prev
            prev=secondHalf
            secondHalf=tmp
        
        first, second = head, prev
        while second:
            tmp1, tmp2 = first.next, second.next
            first.next=second
            second.next=tmp1
            first, second = tmp1, tmp2

        



        