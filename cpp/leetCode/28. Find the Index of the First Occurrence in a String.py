class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if len(haystack) == 1:
            if haystack == needle:
                return 0
        elif len(haystack) < len(needle):
            return -1
        
        for x in range(0, len(haystack)):
            if(haystack[x:x+len(needle)] == needle):
                return x
        
        return -1