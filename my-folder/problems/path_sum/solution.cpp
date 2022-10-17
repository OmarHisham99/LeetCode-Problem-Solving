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
      return dfs(root, targetSum,0); 
    }
    
    bool dfs(TreeNode* node,int targetSum, int sum){
        if(node == nullptr ) return false;
            
        if(node->left == NULL && node->right == NULL && sum+node->val == targetSum) return true; 

      
        bool left = dfs(node->left,targetSum,sum+node->val); 
        
        bool right = dfs(node->right,targetSum,sum+node->val); 
        return left || right ; 
    }
    
    
};