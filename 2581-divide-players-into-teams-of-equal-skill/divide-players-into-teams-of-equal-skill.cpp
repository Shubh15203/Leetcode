class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        sort(skill.begin(),skill.end());
        long long n=skill.size();
        long long ele=skill[0]+skill[n-1];
        long long sum=skill[0]*skill[n-1];
        for(int i=1;i<skill.size()/2;i++){
            if(skill[i]+skill[n-i-1] != ele) return -1;
            sum+= skill[i]*skill[n-i-1];
        }

        return sum;
    }
};