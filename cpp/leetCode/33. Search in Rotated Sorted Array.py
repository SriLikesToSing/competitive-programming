class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums)-1

        if nums[l]<nums[r]:
            while l<=r:
                m=(l+r)//2
                if target==nums[m]:
                    return m
                elif target<nums[m]:
                    r=m-1
                elif target>nums[m]:
                    l=m+1
        else:
            while l<=r:
                m=(l+r)//2
                print(nums[m])
                if nums[m]==target:
                    return m
                if nums[m]>=nums[l]:
                    if target>=nums[l] and target<nums[m]:
                        r=m-1
                    else:
                        l=m+1
                elif nums[m]<nums[l]:
                    if target>nums[m] and target<=nums[r]:
                        l=m+1
                    else:
                        r=m-1
       
        return -1   



        