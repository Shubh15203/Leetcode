class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n=numbers.size();
        
        for(int i=0;i<n;i++){
            int find=target-numbers[i];
            int low=i+1;
            int high=n-1,mid=(low+high)/2;
            while(low<=high){
                if(find<numbers[mid]) high=mid-1;
                else if(find>numbers[mid]) low=mid+1;
                else return {i+1,mid+1};
                mid=(low+high)/2;
            }

        }
        return ans;
    }
};