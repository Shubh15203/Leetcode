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
        
        int take,nottake,prev,prev2,curr;
        prev=nums[0];
        
        for(int i=1;i<n;i++){
            take= nums[i];
            if(i>1) take+= prev2;
            nottake= prev;
            curr=max(take,nottake);
            prev2=prev;
            prev=curr;
        }
        // return total(nums,n,0,dp);
        return prev;
    }
};