class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        dp=list()
        dp.append([1])
        dp.append([1,1])
        if numRows==1:
            return [[1]]
        if numRows==2:
            return dp
        for i in range(2,numRows):
            k=[1]
            for j in range(len(dp[i-1])-1):
                x=dp[i-1][j]+ dp[i-1][j+1]
                k.append(x)
            k.append(1)
            dp.append(k)
        return dp