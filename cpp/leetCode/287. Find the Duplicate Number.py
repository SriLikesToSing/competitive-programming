class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        dup = {}

        for x in nums:
            if x in dup.keys():
                return x
            
            dup[x] = True

