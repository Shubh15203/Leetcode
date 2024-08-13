class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        int i=0;
        int j=0;
        for(i;i<s.length();i++){
            if(mp.find(s[i]) != mp.end()){
                mp[s[i]]++;
            }
            else mp[s[i]]=1;
        }
        for(j;j<t.length();j++){
            if(mp.find(t[j]) != mp.end()){
                if(mp[t[j]]==0) return false;
                mp[t[j]]--;
            }
            else return false;
        }
        for(int k=0;k<mp.size();k++){
            if(mp[k]!=0) return false;
        }
        return true;
    }
};