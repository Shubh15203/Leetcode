class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        mydict={}
        n=len(nums)
        for i in nums:
            if i not in mydict:
                c=0
                for j in range(n):
                    if i==nums[j]:
                        c+=1
                mydict[i]=c
        m=n//3
        k=[]
        for i in mydict:
            if mydict[i]>m:
                k.append(i)
        return k
