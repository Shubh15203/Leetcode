class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(i+1 < nums.size() && nums[i]==nums[i+1])
            i+=2;
            else{
                return nums[i];
            }
        }
        return 0;
    } 
};