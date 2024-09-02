class Solution {
public:
    void func(int idx, vector<int>& nums,vector<int>& res,vector<vector<int>>& ans){
        if(idx== nums.size()) {
            ans.push_back(res);
            return ;
        }

        res.push_back(nums[idx]);
        func(idx+1,nums,res,ans);
        res.pop_back();
        func(idx+1,nums,res,ans);


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        func(0,nums,res,ans);
        return ans;
    }
};