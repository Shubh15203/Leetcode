class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> nge;
        stack<int> st;
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()) nge.push_back(0);
            else nge.push_back(st.top()-i);
            st.push(i);
        }
        reverse(nge.begin(),nge.end());
        return nge;
    }
};