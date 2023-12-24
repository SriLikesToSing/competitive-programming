    """
    # Definition for a Node.
    class Node:
        def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
            self.val = int(x)
            self.next = next
            self.random = random
    """

    class Solution:
        def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
            t = head
            hash = {None: None}

            while t:
                c = Node(t.val)
                hash[t] = c
                t=t.next

            t2 = head 
            while t2:
                hash[t2].next = hash[t2.next]
                hash[t2].random = hash[t2.random] 
                t2=t2.next


            return hash[head]
            
