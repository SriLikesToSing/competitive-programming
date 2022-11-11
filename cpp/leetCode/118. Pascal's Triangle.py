class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        output = [[1], [1, 1]]
        
        if numRows == 1:
            return [[1]]
        if numRows == 2:
            return output
        
        for x in range(2, numRows):
            added = [1]
            for y in range(1, x):
                print(x)
                print(output[x-1][y-1], " ", output[x-1][y])
                added.append(output[x-1][y-1] + output[x-1][y])
            added.append(1)
            output.append(added)
            
        return output