class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        i=0
        j=0
        g.sort()
        s.sort()
        count=0
        n=len(g)
        m=len(s)
        while(i<n and j<m):
            if s[j] >= g[i] :
                count+=1
                i+=1
            j+=1
        return count
