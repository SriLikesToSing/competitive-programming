# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        left, right = -1000000000000, 1000000000000

        def dfs(root, l, r):
            if not root:
                return True

            if root.val > l and root.val < r:
                return dfs(root.right, root.val, r) and dfs(root.left, l, root.val)
            else:
                return False

            
        return dfs(root.right, root.val, right) and dfs(root.left, left, root.val)

            
        

            

                

        return bfs(root.left, 0, root.val) and bfs(root.right, 1, root.val)
