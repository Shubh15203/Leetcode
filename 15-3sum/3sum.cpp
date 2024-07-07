#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i;
        vector<vector<int>> ans;
        for (i=0;i<nums.size();i++){
            if (i>0 && nums[i-1]==nums[i]){continue;}
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
                if (sum<0) {j++;}
                else if (sum>0) {k--;}
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while (nums[j] == nums[j-1] && j < k) {
                        j++;}

                }


            }
            
        }
        return ans;
    }
};