class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        long long x,y;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="-" || tokens[i]=="/"){
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                if(tokens[i]=="+") st.push(y+x);
                else if(tokens[i]=="-") st.push(y-x);
                else if(tokens[i]=="*") st.push(y*x);
                else if(tokens[i]=="/") st.push(y/x);
            }
            else{
                st.push(stoi(tokens[i])); 
            }
        }
        return st.top();
    }
};