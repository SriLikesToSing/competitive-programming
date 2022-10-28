class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = 0
        for x in stones:
            for y in jewels:
                if x == y:
                    count+=1
                    
        return count