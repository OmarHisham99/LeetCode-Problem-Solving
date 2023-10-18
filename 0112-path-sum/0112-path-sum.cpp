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
 
    bool hasPathSum(TreeNode* root, int targetSum) {
     if(root == nullptr) return false ; 
      bool res = dfs(root,0,targetSum); 
      return res ;
    }

    bool dfs(TreeNode* node, int sum,int target){ 
        if(node==NULL) return false ; 
        if(!node->left && !node->right && sum+node->val==target) return true ;  
        
        return dfs(node->left,sum+node->val,target) || dfs(node->right,sum+node->val,target);  
    }
};