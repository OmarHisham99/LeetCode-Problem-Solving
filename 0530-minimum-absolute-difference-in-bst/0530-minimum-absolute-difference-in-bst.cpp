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
int mini = INT_MAX; 
    int getMinimumDifference(TreeNode* root) {
       int ans=INT_MAX, lastValue=-1; 
       dfs(root,lastValue,ans); 
       return ans; 
     }
     void dfs(TreeNode* node,int & lastValue, int& ans){
         if(node->left) dfs(node->left,lastValue,ans); 
         if(lastValue >=0) ans = min(ans,node->val - lastValue); 
         lastValue = node->val ; 
         if(node->right) dfs(node->right,lastValue,ans); 
     }
     

};