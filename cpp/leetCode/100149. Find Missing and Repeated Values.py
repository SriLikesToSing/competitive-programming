class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        res=[0, 0]
        mapp= dict((x, 0) for x in range(1, (len(grid)**2)+1))
        for x in grid:
            for y in x:
                mapp[y] = 1+mapp.get(0, mapp[y])
                if mapp[y] == 2:
                    res[0] = y
                    
        for x in mapp.keys():
            if mapp[x]==0:
                res[1] = x
                
        return res
        
                