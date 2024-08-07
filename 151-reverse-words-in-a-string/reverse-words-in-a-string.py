class Solution:
    def reverseWords(self, s: str) -> str:
        ls=s.split()
        newstr=""
        ls.reverse()
        
        return ' '.join(ls)
        # for i in range(len(ls)-1,0,-1):
        #     newstr.join(ls[i])
        # return newstr
