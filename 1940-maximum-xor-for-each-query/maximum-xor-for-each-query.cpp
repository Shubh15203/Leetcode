class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> prefixxor;
        vector<int> ans;
        int xorr=nums[0];
        prefixxor.push_back(nums[0]);

        for(int i=1;i<nums.size();i++){
            xorr^=nums[i];
            prefixxor.push_back(xorr);
        }
        int n=nums.size()-1, num=pow(2,maximumBit)-1;
        for(int i=0;i<nums.size();i++){
            int x=num;
            while(x){
                int temp=prefixxor[n-i]^num;
                if(temp<=num){
                    ans.push_back(temp);
                    break;
                }
                else num--;
            }
        }
        return ans;
    }
};