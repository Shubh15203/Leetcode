class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> ans;
        int n=nums.size();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[i] >= st.top()) {
                st.pop();
            }
            if (st.empty()) {
                ans.push_back(INT_MAX);
            } 

            else
                ans.push_back(st.top());
            st.push(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(ans[i]==INT_MAX ){
                int flag=0;
                for(int j=0;j<i;j++){
                    if(nums[j]>nums[i]){
                        ans[i]=nums[j];
                        flag=1;
                        break;
                    }
                }
                if(flag==0) ans[i]=-1;
            }
        }
        return ans;
    }
};