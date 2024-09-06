#include<bits/stdc++.h>
class Solution {
public:
    int kthFactor(int n, int k) {
        if(n/2+1 <k) return -1;
        int num=n/2;
        vector<int> ans;
        for(int i=1;i<=n/2;i++){
            if(n%i==0) 
            ans.push_back(i);
        }
        ans.push_back(n);
        if(k>ans.size()) return -1;
        // return ans[k-1];
        return ans[k-1];
        
    }
};