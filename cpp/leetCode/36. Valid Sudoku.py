class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row = collections.defaultdict(set)
        col = collections.defaultdict(set)
        subBoxes = collections.defaultdict(set)

        for x in range(0, 9):
            for y in range(0, 9):
                if board[x][y] == ".":
                    continue
                if board[x][y] in row[x] or board[x][y] in col[y] or board[x][y] in subBoxes[(x//3, y//3)]:
                    return False
                row[x].add(board[x][y])
                col[y].add(board[x][y])
                subBoxes[(x//3, y//3)].add(board[x][y]) 
                
        
        return True
