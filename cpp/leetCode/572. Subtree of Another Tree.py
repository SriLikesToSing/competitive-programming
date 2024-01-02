# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def isSameTree(p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        
        if (p and q) and p.val == q.val:
            return isSameTree(p.left, q.left) and isSameTree(p.right, q.right)
        elif not (p or q):
            print(p, q)
            return True
        else:
            return False

class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        
        subROOT = subRoot

        def bfs(root, subRoot):
    
            if (root and subRoot) and root.val != subRoot.val:
                return bfs(root.left, subROOT) or bfs(root.right, subROOT)
            elif (root and subRoot) and root.val == subRoot.val:    
                
                if isSameTree(root.left, subRoot.left) and isSameTree(root.right, subRoot.right):
                    print('hi')
                    return True
                else:
                    return bfs(root.left, subROOT) or bfs(root.right, subROOT)
            
        return bfs(root, subRoot)
            
