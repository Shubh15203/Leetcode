class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        k%=nums.size();
        int x=nums.size()-k;
        for(int i=x;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<x;i++){
            ans.push_back(nums[i]);
        }
        nums=ans;
    }
};