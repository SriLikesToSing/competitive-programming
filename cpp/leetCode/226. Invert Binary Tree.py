# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def invert(tree):
    if tree==None:
        return None

    tmp = tree.right
    tree.right = tree.left
    tree.left = tmp

    invert(tree.right)
    invert(tree.left)

    return tree


class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:

        return invert(root)
        