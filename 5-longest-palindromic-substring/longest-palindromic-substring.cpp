class Solution {
public:
    string expand(int l, int r,int n,string s){
        while(l>=0 && r<n && s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;
        int n=s.length();
        string maxstr=s.substr(0,1);
        for(int i=0;i<s.size();i++){
            string odd=expand(i,i,n,s);
            string even=expand(i,i+1,n,s);
            if(odd.length()>maxstr.length()){
                maxstr=odd;
            }
            if(even.length()>maxstr.length()){
                maxstr=even;
            }
        }
        return maxstr;
    }
};