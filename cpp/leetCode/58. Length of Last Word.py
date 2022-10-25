class Solution1:
    def lengthOfLastWord(self, s: str) -> int:
        result = []
        word = ""
        
        res = s.split()
        return len(res[-1])
            
# with no inbuild functions
class Solution2:
    def lengthOfLastWord(self, s: str) -> int:
        wordLengthTemp = 0
        wordLength = 0
        for x in s:
            if x == ' ':
                wordLengthTemp = 0
                continue
            else:
                wordLengthTemp+=1
                wordLength = wordLengthTemp
                
        return wordLength
                
            