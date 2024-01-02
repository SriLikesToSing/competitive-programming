# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def depth(root):
    if root == None:
        return [True, 0]

    left, right = depth(root.left), depth(root.right)

    return [left[0] and right[0] and abs(left[1]-right[1])<=1, 1 + max(left[1], right[1])]

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
      return depth(root)[0]

        