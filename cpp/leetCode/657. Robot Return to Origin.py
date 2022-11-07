class Solution:
    def judgeCircle(self, moves: str) -> bool:
        X = 0
        Y = 0
        
        for x in moves:
            if x == "U":
                Y+=1
            elif x == "D":
                Y-=1
            elif x == "L":
                X-=1
            elif x == "R":
                X+=1
        
        if X == 0 and Y == 0:
            return True
        else:
            return False