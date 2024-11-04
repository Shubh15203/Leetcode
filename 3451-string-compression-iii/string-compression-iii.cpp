class Solution {
public:
    string compressedString(string word) {
        int count,n=word.length(),i=0;
        string ans="";
        for(int i=0;i<n;){
            count=0;
            char ch=word[i];
            while( ch==word[i] && count<9 ){
                count++;
                i++;
            }
            ans+= to_string(count)+ ch;

        }
        return ans;
    }
};