
#the biggest crime is making integers non indexable
class Solution:
    def maxArea(self, height: List[int]) -> int:
        if len(height) == 2:
            return min(height[0], height[1])
        
        maxWater = -1 
        i = 0
        j = len(height)-1

        while i<j:
            width = j-i
            tempHeight = min(height[i], height[j])
            maxWater = max(maxWater, width*tempHeight)

            print(maxWater, width, tempHeight)

            if height[i] < height[j]:
                i+=1
                continue
            else:
                j-=1

        return maxWater


        