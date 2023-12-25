# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
       

        mp = {}
        curr = head
        index=0
        while curr:
            if curr in mp.values():
                return True

            mp[index] = curr 
            index+=1
            curr=curr.next

        return False
