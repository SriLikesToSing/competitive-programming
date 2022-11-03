class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        
        l = 0
        r = len(s)-1
        
        temp = s.copy()
        while(r!=-1):
            if r == -1:
                break
            
            s[l] = temp[r]
            l+=1
            r-=1
            
            
        
        
            

            