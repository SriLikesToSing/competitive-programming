# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        out = ListNode()
        res = out
        a = l1
        b = l2
        r = 0
        while a or b or r!=0:
            o = a.val if a else 0
            t = b.val if b else 0

            sum=(o+t+r)%10
            r = (o+t+r)//10

            res.next = ListNode(sum)
            res=res.next
            a=a.next if a else None
            b=b.next if b else None

        return out.next

