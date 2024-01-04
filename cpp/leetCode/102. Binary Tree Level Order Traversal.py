# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        res=[]
        
        def bfs(root, layer):
            if not root:
                return 

            if len(res) >= layer+1:
                res[layer].append(root.val)
            else:
                res.append([root.val])
            
            bfs(root.left, layer+1)
            bfs(root.right, layer+1)

        bfs(root, 0)
        return res
