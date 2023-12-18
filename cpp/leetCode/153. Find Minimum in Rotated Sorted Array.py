class Solution:
    def findMin(self, nums: List[int]) -> int:
    
        l, r = 0, len(nums)-1
        minVal=nums[0]
        while l<=r:
            #edgecase is when array is already sorted
            if nums[l] < nums[r]:
                return min(minVal, nums[l])
            m = (l+r)//2
            minVal=min(minVal, nums[m])
            if nums[m] >= nums[l]:
                l=m+1
            else:
                r=m-1
        return minVal