class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int total=0;
        for(int i=0;i<rolls.size();i++){
            total+=rolls[i];
        }
        int sum_n=mean*(n+rolls.size()) - total;
        vector<int> ans;
        int num= sum_n / n;
        if(num>6 || num<1) return {};
        for(int i=0;i<n;i++){
            ans.push_back(num);
            sum_n-=num;
        }
        int i=0;
        while(sum_n!=0 && i!=n-1){
           if(ans[i]+1<7){
            ans[i]+=1;
            sum_n-=1;
            i++;}
            else break;
        }
        if(sum_n!=0) return {};
        
        return ans;
    }
};