class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        stack<string> stk;
        string res;

        for(char c : s)
            if(c == ' ' && res.length()){
                stk.push(res);
                res = "";
            }
            else if(c != ' ')
                res += c;            

        while(not stk.empty()){
            res += stk.top() + ' ';
            stk.pop();
        }

        res.pop_back();
        return res;
    }
};