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
    long mini = LONG_MIN, maxi = LONG_MAX ; 
    bool isValid(TreeNode* root,long mini, long maxi){
        if(root ==nullptr){
            return true; 
        }
        if(root->val <= mini || root->val >=maxi) return false ; 
        else return isValid(root->left,mini,root->val) && isValid(root->right,root->val,maxi); 
    }
    bool isValidBST(TreeNode* root) {
       return isValid(root,mini,maxi); 
        
    }
};