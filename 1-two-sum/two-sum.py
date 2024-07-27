class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        k=[]
        mydict={}
        for i in range(len(nums)):
            num=nums[i]
            need=target-num
            if need in mydict:
                k.append(i)
                k.append(mydict[need])
                return k
            mydict[num]=i                    

                

            