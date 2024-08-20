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
    int solve(TreeNode* root,int maxim,int depth){
        if(root->left==NULL && root->right==NULL){
            maxim=max(maxim,depth);
            return maxim;
        }
        if(root->left) maxim= solve(root->left,maxim,depth+1);
        if(root->right) maxim= solve(root->right,maxim,depth+1);
        depth--;
        return maxim;
    } 
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int anss = solve(root,1,1);
        return anss;
    }
};