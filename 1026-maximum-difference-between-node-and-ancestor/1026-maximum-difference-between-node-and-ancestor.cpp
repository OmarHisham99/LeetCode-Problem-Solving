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
    vector<int> results ; 

    void dfs(TreeNode* root, int min, int max){
        if(!root){
            int res = max - min ; 
            results.push_back(res);
            return;  
        }
        if(root->val > max) max = root->val ;
        if(root->val < min) min = root->val ;

        dfs(root->left,min,max); 
        dfs(root->right,min,max); 
    }

    int maxAncestorDiff(TreeNode* root) {
        dfs(root,root->val,root->val); 
        int max = results[0]; 
        for(int i=1;i<results.size();i++){
            if(results[i]>max) max = results[i]; 
        }
        return max; 
    }
};