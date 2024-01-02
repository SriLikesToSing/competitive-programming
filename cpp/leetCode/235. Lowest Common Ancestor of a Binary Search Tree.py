# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        n = root
        while n:
            if q.val > n.val and p.val > n.val:
                n = n.right
            elif p.val < n.val and q.val < n.val:
                n = n.left
            else:
                return n

