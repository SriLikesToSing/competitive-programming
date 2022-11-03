class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums.sort(reverse=True)
        
        count = 1
        for x in range(1, len(nums)):
            
            if nums[x] == nums[x-1]:
                continue
            elif nums[x] != nums[x-1]:
                count+=1
            
            if count == 3:
                return nums[x]
            
        if count < 3:
            return nums[0]
        
        
        