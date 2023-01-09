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
    vector<int> result; 
    void dfs(TreeNode* node){
        if(node==NULL){
            return ; 
        }
        result.push_back(node->val); 
        dfs(node->left); 
        dfs(node->right); 
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL) {
            return {}; 
        }
        result.push_back(root->val); 
        dfs(root->left); 
        dfs(root->right); 
        return result;  
    }
};