class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int longest_equals=0;
        int count=0,maxAnd=0;
        int i=0,j=0;
        // while(i<=j && j<nums.size()){
        //     if(nums[i]==nums[j]){
        //         count++;
        //         j++;
        //         maxAnd= max(maxAnd,nums[i]);
        //     }
        //     else{
        //         j++;
        //         i=j;
        //         count=0;
        //     }
        //     longest_equals=max(longest_equals,count);
        // }
        // return longest_equals;
        int largest=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
        }
        count=1;
        int maxcount=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i] && nums[i]==largest) count++;
            else count =1;
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};