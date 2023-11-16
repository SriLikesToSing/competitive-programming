class Solution:
    
    #broke ass solution wtf is this?
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


    #This is what I call pretty
    class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join(x for x in s if x.isalnum())
        s = s.lower()

        if len(s) == 1 or s == "":
            return True

        front = 0
        end = len(s)-1

        while(front < len(s)//2):
            if s[front] != s[end]:
                return False
            front+=1
            end-=1
        return True
            
            
    
    
    
    
    
    
