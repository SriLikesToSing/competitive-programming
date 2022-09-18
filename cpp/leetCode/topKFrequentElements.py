class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        nums.sort()
        Store = {}
        count = 1
        
        for x in range(nums[0], nums[-1]+1):
            Store[x] = 0
        
        for x in nums:
            if x in Store:
                Store[x]+=1
        

        Store = dict(sorted(Store.items(), key=lambda item: item[1], reverse=True))
        
        result = [x for x in Store.keys()]
        
        return result[0:k]





















