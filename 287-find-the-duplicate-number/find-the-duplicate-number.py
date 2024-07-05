class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        n = len(nums)
        freq = [0] * (n + 1)
        for i in range(n):
            if freq[nums[i]] == 0:
                freq[nums[i]] += 1
            else:
                return nums[i]
        return 0
        
                