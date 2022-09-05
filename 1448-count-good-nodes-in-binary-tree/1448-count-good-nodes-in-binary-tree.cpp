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
    int count =0 ; 
    
    void traverseTree(TreeNode* root,int maxi){
        if(root->val >=maxi){
            count++; 
        }
        maxi = max(root->val,maxi); 
        if(root->left){
            traverseTree(root->left,maxi); 
        }
        if(root->right){
            traverseTree(root->right,maxi); 
        }
    }
    
    int goodNodes(TreeNode* root) {
        traverseTree(root,INT_MIN); 
        return count ; 
    }
};