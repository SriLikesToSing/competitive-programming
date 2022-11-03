class Solution:
    def isPalindrome(self, s: str) -> bool:
        r = 0
        l = len(s)-1
        
        if len(s) == 0 or len(s) == 1:
            return True
        
        while(r<l):
                
            if s[r].isalnum() == False:
                r+=1
                continue           
            
            if s[l].isalnum() == False:
                l-=1
                continue
                
            if s[r].lower()!=s[l].lower():
                return False

            
            r+=1
            l-=1
            
        return True
            
            
    
    
    
    
    
    
