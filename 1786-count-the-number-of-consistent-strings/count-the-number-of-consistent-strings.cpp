class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> mp;
        for (int i = 0; i < allowed.length(); i++)
            mp[allowed[i]] += 1;
        int count = 0, cons = 0;
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            int flag = 0;
            for (int j = 0; j < s.length(); j++) {
                if (mp.find(s[j]) == mp.end()) {
                    flag = 1;
                    break;
                }
            }
            if (flag==0)
                cons++;
        }
        return cons;
    }
};