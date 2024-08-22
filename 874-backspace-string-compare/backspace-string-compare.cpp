class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> ss;
        vector<char> tt;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && !ss.empty())
            ss.pop_back();
            else if(s[i]!='#') ss.push_back(s[i]);
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && !tt.empty())
            tt.pop_back();
            else if(t[i]!='#') tt.push_back(t[i]);
        }
        // sort(ss.begin(),ss.end());
        // sort(tt.begin(),tt.end());
        return ss==tt;
    }
};