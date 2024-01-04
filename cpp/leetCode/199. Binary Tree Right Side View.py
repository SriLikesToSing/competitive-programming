# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        res=[]
        q=collections.deque([root])

        while q:
            rSide = None
            l = len(q)
            for x in range(l):
                rightMost = q.popleft()
                if rightMost:
                    rSide = rightMost
                    q.append(rSide.left)
                    q.append(rSide.right)
            if rSide:
                res.append(rSide.val)

        return res


