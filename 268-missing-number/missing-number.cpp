class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++) 
        sum+=nums[i];

        int n=nums.size()+1;
        int nsum=(n*(n-1)) / 2;
        return nsum-sum;
    }
};