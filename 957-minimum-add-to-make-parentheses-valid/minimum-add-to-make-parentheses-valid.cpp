class Solution {
public:
    int minAddToMakeValid(string s) {
        int extra=0;
        stack<char> st; 
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')' && !st.empty()){
                st.pop();
            }
            else if(s[i]==')' && st.empty()){
                extra++;
            }
        }
        return st.size()+extra;
    }
};