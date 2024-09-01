class Solution {
public:
    void subsets(int ind, vector<int>& nums,int  n,set<vector<int>>& ans,vector<int> res) {
    if(ind==n){
        sort(res.begin(),res.end());
        ans.insert(res);
        return ;
    }
    res.push_back(nums[ind]);
    subsets(ind+1,nums,n,ans,res);
    res.pop_back();
    subsets(ind+1,nums,n,ans,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> res;
        int n=nums.size();
        subsets(0,nums,n,ans,res);
        vector<vector<int>> result;
        for(auto it: ans){
            result.push_back(it);
        }
        return result;
    }
};