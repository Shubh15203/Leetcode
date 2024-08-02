class Solution:
    def countSeniors(self, details: List[str]) -> int:
        c=0
        for i in range(len(details)):
            if details[i][11:13] > "60":
                c+=1
        return c