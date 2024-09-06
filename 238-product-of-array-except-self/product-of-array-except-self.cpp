class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,count0=0;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            if(nums[i]==0) count0++;
        }   
        vector<int> ans;
        if(count0>1) {
            vector<int> ans(nums.size(),0);
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans.push_back(prod/nums[i]);
            }
            else{
                int p=1;
                for(int i=0;i<nums.size();i++){
                    if(nums[i]==0) continue;
                    p*=nums[i];
                }
                ans.push_back(p);
            }
        }
        return ans;
    }
};