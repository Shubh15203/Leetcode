class Solution {
public:
    int count1s(int num){
        int set=0;
        while(num>0){
            if(num%2==1) set++;
            num/=2;
        }
        return set;
    }
    bool canSortArray(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int x=count1s(nums[i]);
            mp[nums[i]]=x;
        }
        
        for(int i=0;i<nums.size()-1;i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    if(mp[nums[j]]==mp[nums[j+1]]){
                        swap(nums[j],nums[j+1]);
                    }
                    else return  false;
                }
            }
        }
        return true;
    }
};