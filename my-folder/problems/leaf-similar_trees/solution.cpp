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
 
    void dfs(TreeNode* root,vector<int>& leafs){
        if(!root){
            return ; 
        }
        if(!root->left&&!root->right){
             leafs.push_back(root->val); 
             return ; 
        }
        dfs(root->left,leafs);
        dfs(root->right,leafs); 
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> firstLeafs, secondLeafs; 
        dfs(root1,firstLeafs);
        dfs(root2,secondLeafs);
       
        return firstLeafs == secondLeafs; 
    }
};