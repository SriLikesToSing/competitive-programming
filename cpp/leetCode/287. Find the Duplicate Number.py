class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        dup = {}

        for x in nums:
            if x in dup.keys():
                return x
            
            dup[x] = True


class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        s, f = 0, 0

        while True:
            s = nums[s]
            f = nums[nums[f]]
            if s == f:
                break

        p2 = 0
        while True:
            s = nums[s]
            p2 = nums[p2]
            if s == p2:
                return s

