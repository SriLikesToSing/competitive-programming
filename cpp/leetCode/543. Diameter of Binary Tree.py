# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


maxD = 0
class Solution:
   
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        maxD = [0]
        def recurse(root):
            if root == None:
                return -1

            left, right = recurse(root.left), recurse(root.right)

            maxD[0] = max(maxD[0], left + right + 2)
            
            return 1 + max(left, right)

        recurse(root)
        return maxD[0]