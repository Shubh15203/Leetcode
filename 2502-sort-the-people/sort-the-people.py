class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        return[b for a,b in sorted(zip(heights,names), reverse = True)]
