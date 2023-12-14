class Solution:
   #world record?????? 
    def search(self, nums: List[int], target: int) -> int:
        mid = len(nums)//2
        mx = len(nums)-1
        mn = 0
        while mn <= mx:
            print(mid, mx, mn)
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                tmp = mid
                mid = (mx+mid+1)//2
                mn = tmp+1
                continue
            elif nums[mid] > target:
                tmp = mx
                mx = mid-1
                mid = (mn+tmp)//2
                continue
        return -1    
            
