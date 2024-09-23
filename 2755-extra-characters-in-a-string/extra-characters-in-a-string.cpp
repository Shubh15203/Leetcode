class Solution {
public:
    int n ;
    
    int solve(int start,string &s,unordered_map<string, int > &mp,vector<int> &dp)
    {
        if(start>=n)
        {
          return 0;   
        }
        
        if(dp[start] !=-1)
            return dp[start];
        
        int min_diff = s.length();
        string temp;
        for(int i=start; i<s.length(); i++)
        {
            temp.push_back(s[i]);
            int cex = temp.length();
            if(mp.find(temp)!=mp.end())
            {
                cex = 0;
            }
            
            int nex = solve(i+1,s,mp,dp);
            
            min_diff = min(min_diff, nex+cex);
            
        }
        
        return dp[start] = min_diff;

    }
    
    int minExtraChar(string s, vector<string>& d) {
        
        n = s.length();
        vector<int> dp(n,-1);
        unordered_map<string, int > mp;
        
        for(auto i: d)
        {
            mp[i]++;
        }
        
        return solve(0,s,mp,dp);        
    }
};