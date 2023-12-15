class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        l, r = 1, max(piles)
        out = r

        while l<=r:
            md=(l+r)//2
            hr=0
            for x in piles:
                hr+=math.ceil(x / md)
            
            if hr<=h:
                out=min(out, md)
                r=md-1
            else:
               l=md+1
               continue
        return out
