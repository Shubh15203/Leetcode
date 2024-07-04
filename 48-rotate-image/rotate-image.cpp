#include <algorithm>
#include <iostream>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j;
        int n=matrix.size();
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(i<j)
                    swap(matrix[i][j],matrix[j][i]);
                    
            }
        }
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
    }
    }
};