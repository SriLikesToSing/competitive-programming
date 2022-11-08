class Solution:
    def countSubstrings(self, s: str) -> int:
        '''
        #O(n^2 * # of non repeated substrings)
        
        dict = {}
        
        def isPalindrome(string):
            
            if dict.get(string) == True:
                return True
                

            if(len(string) == 1):
                return True
            
            l = 0 
            r = len(string)-1
            
            
            while(l < r):
                if string[l] != string[r]:
                    return False
                
                l+=1
                r-=1
            
            dict[string] = True
            return True
            
        count = 0 
        for x in range(len(s)):
            temp=""
            for y in range(x, len(s)):
                temp+=s[y]
                if isPalindrome(temp) == True:
                    count+=1

        return count
    '''
        # O(n^2) solution
        count=0

        for x in range(0, len(s)):

            #odd palindrome check
            l=x
            r=x
            while l>=0 and r<len(s) and s[l] == s[r]:
                count+=1
                l-=1
                r+=1
            #even palindrome check
            l=x
            r=x+1
            while l>=0 and r<len(s) and s[l] == s[r]:
                count+=1
                l-=1
                r+=1
        return count



        