/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxsum(TreeNode* root,int &maxi){
        if(root==NULL) return 0;

        int leftsum=max(0,maxsum(root->left,maxi));
        int rightsum=max(0,maxsum(root->right,maxi));

        maxi=max(maxi,root->val + leftsum + rightsum);

        return root->val + max(leftsum,rightsum);

        // int leftMaxPath = max(0, maxsum(root->left, maxi));
        // int rightMaxPath = max(0, maxsum(root->right, maxi));

        // // Update the overall maximum
        // // path sum including the current node
        // maxi = max(maxi, leftMaxPath + rightMaxPath + root->val);

        // // Return the maximum sum considering
        // // only one branch (either left or right)
        // // along with the current node
        // return max(leftMaxPath, rightMaxPath) + root->val;

    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxsum(root,maxi);
        return maxi;
    }
};