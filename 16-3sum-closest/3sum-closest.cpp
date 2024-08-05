class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int close=INT_MAX/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum=0;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-close)){
                    close=sum;
                }
                if(sum<target) j++;
                else if(sum>target) k--;
                else return sum;
            }
        }
        return  close;
    }
};