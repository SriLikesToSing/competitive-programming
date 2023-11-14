class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        #you can solve it in O(1) time if remove the use of two hash tables and 
        # combine it into one.
        answer = [1] * (len(nums))
        prefix = 1
        for x in range(0, len(nums)):
            answer[x] = prefix
            prefix*=nums[x]
        
        postfix = 1
        for x in range(len(nums)-1, -1, -1):
            answer[x] *= postfix
            postfix*=nums[x]
        
        return answer
