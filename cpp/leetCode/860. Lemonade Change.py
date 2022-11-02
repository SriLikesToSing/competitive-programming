class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        five = 0
        ten = 0
        twenty = 0
                
        for x in bills:
            if x == 5:
                five+=1
                
            if x == 10 and five>=1:
                five-=1
                ten+=1
                continue
            elif x==10 and five<1:
                return False
            
            if x == 20:
                if ten>=1 and five>=1:  
                    five-=1
                    ten-=1
                elif  five>=3:
                    five-=3
                else:
                    return False
            
        return True