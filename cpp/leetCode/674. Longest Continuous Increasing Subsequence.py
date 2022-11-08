class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        
        maxi = 1
        temp = 1
        
        for x in range(1, len(nums)):
            if nums[x] > nums[x-1]:
                temp+=1
            else:
                temp=1
                
            maxi = max(maxi, temp)
                
                
        return maxi