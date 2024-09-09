class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,char> mps;
        map<char,char> mpt;
        for(int i=0;i<s.length();i++){
            if(mps.find(s[i]) == mps.end()){
                mps[s[i]]=t[i];
            }
            else{
                if(mps[s[i]]==t[i]) continue;
                else return false;
            }

            if(mpt.find(t[i]) == mpt.end()){
                mpt[t[i]]=s[i];
            }
            else{
                if(mpt[t[i]]==s[i]) continue;
                else return false;
            }
        }
        return true;
        
    }
};