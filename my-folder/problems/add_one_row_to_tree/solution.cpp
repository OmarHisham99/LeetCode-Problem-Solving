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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth ==1){
            TreeNode* node = new TreeNode(val); 
            node->left = root; 
            return node; 
        }
        else{
            dfs(root,val,depth,1);             
        }
        return root ; 
    }
    void dfs(TreeNode* node, int val, int depth, int cur){
        if(node ==NULL) return ; 
        if(cur+1 == depth){
            TreeNode* temp = node->left;
            node->left = new TreeNode(val); 
            node->left->left = temp; 
            temp = node->right; 
            node->right = new TreeNode(val); 
            node->right->right = temp; 
        }
        dfs(node->left, val,depth,cur+1);
        dfs(node->right, val,depth,cur+1); 
    }
};