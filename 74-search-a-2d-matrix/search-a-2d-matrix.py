class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m=len(matrix)
        n=len(matrix[0])
        flag=-1
        for i in range(m):
            
            if target<=matrix[i][n-1]:
                flag=i
                break
        if flag==-1:
            return False
        for j in range(n):
            if matrix[flag][j] == target:
                return True
        return False