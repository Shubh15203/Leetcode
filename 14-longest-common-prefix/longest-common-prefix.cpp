class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int size=strs.size()-1;
        string s1=strs[0],s2=strs[size];
        int count=0;
        for(int i=0;i<min(s1.length(),s2.length());i++){
            if(s1[i]==s2[i]){
                count++;
            }
            else{
                break;
            }
        }
        return s2.substr(0,count);
    }
};