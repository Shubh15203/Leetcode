class Solution {
public:
    int total(vector<int>& nums, int n , int i, vector<int>& dp){
        if(i>n-1) return 0;
        if(dp[i]!=-1) return dp[i];
        dp[i]=max(nums[i]+ total(nums,n,i+2,dp), total(nums,n,i+1,dp));
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return total(nums,n,0,dp);
    }
};