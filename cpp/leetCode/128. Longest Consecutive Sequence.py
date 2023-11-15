class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        SET = set(nums)
        longestLength = 0
        
        #O(n) time and O(n) space 
        for x in nums:
            if(x-1) not in SET:
                tLength = 0
                #this means this number starts the sequence
                while (x + tLength) in SET:
                    tLength+=1
                longestLength = max(longestLength, tLength)

        return longestLength