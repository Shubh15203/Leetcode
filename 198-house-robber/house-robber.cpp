class Solution {
public:
    // int total(vector<int>& nums, int n , int i, vector<int>& dp){
    //     if(i>n-1) return 0;
    //     if(dp[i]!=-1) return dp[i];
    //     dp[i]=max(nums[i]+ total(nums,n,i+2,dp), total(nums,n,i+1,dp));
    //     return dp[i];
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> dp(n,-1);
        int take,nottake;
        dp[0]=nums[0];
        
        for(int i=1;i<n;i++){
            take= nums[i];
            if(i>1) take+= dp[i-2];
            nottake= dp[i-1];
            dp[i]=max(take,nottake);
        }
        // return total(nums,n,0,dp);
        return dp[n-1];
    }
};