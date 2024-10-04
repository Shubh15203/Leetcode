class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1!=nums[i]) return nums[i-1]+1;
        }
        if(nums[0]==0) return nums.size();
        return 0;
        
    }
};