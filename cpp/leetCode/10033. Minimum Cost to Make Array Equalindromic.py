class Solution:
   
    def minimumCost(self, nums: List[int]) -> int:
        def isPalindrome(n):
 
            rev = 0
            i = n
            while i > 0:
                rev = rev * 10 + i % 10
                i //= 10

           
            return (n == rev)
       
        nums.sort()
        l, r = nums[len(nums)//2], nums[len(nums)//2]

                
        while not isPalindrome(l):
            l-=1
            
            
        while not isPalindrome(r):
            r+=1
            
            
        cost1, cost2= 0, 0
        for x in nums:
            cost1+=abs(x-r)
            cost2+=abs(x-l)
        
            
        print(l, r)
        return min(cost1, cost2)
    
        
            