# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        e = ListNode()
        t = e

        while list1 and list2:
             if list1.val > list2.val:
                 t.next=list2
                 list2=list2.next
             else:
                 t.next=list1
                 list1=list1.next
             t=t.next
        
        if list1!=None:
            t.next=list1
        else:
            t.next=list2

        return e.next

        
                 