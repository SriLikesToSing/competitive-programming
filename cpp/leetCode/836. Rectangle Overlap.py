class Solution:
    def isRectangleOverlap(self, rec1: List[int], rec2: List[int]) -> bool:
        X1max = max(rec1[0], rec2[0])
        X2min = min(rec1[2], rec2[2])
        
        Y1max = max(rec1[1], rec2[1])
        Y2min = min(rec1[3], rec2[3])
        
        
        if X1max < X2min and Y1max < Y2min:
            return True
        else:
            return False
        