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
    int kthSmallest(TreeNode* root, int k) {
        int res = -1,cnt=0;
        dfs(root,res,cnt,k);  
        return res; 
    }
    void dfs(TreeNode* node,int& res,int& cnt, int k ){
        if(node->left) dfs(node->left,res,cnt,k);
        cnt++;  
        if(cnt == k) res = node->val; 
        if(node->right) dfs(node->right,res,cnt,k); 
    }
};