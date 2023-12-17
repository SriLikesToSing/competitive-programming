class Solution:
    def divideArray(self, nums: List[int], k: int) -> List[List[int]]:
        res = []
        nums.sort()
        for x in range(2, len(nums), 3):
            print(x, x-1, x-2)
            d1=abs(nums[x]-nums[x-1])
            d2=abs(nums[x]-nums[x-2])
            d3=abs(nums[x-1]-nums[x-2])
            if d1 <= k and  d2 <= k  and  d3 <= k:
                res.append([nums[x-2], nums[x-1], nums[x]])
            else:
                return []
                
        return res
            