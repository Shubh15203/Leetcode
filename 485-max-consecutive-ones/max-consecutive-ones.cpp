class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,count=1,finl=0;
        vector<int> res;
        if (find(nums.begin(), nums.end(), 1) != nums.end())
        i=0;
        else{
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        for(int j=1;j<nums.size();j++){
            if(nums[i]==nums[j] && nums[i]==1)count++;
            else{
                i=j;
                finl=max(finl,count);
                count=1;
            }
        }
        finl=max(finl,count);
        return finl;
    }
};