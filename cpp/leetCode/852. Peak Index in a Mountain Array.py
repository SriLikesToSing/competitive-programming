class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        '''
        for x in range(1, len(arr)):
            if arr[x] > arr[x+1] and arr[x] > arr[x-1]:
                return x
        '''
        
        #binary search solution
        
        lo, hi = 0, len(A) - 1
        while lo < hi:
            mi = (lo + hi)/2
            if A[mi] < A[mi + 1]
                lo = mi + 1
            else:
                hi = mi
        return lo