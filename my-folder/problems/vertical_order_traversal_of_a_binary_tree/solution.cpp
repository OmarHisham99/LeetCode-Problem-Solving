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
    map<int,vector<pair<int,int>>> mp ;
    void dfs(TreeNode* node,int row,int col){
        if(node ==NULL){
            return ; 
        }
        mp[col].push_back({row,node->val}); 
        dfs(node->left,row+1,col-1); 
        dfs(node->right,row+1,col+1); 
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0); 
        vector<vector<int>> ans ; int k=0;  
        for(auto it :mp){
            sort(it.second.begin(),it.second.end());
            ans.push_back({}); 
            for(auto j:it.second){
                ans[k].push_back(j.second); 
            }
            k++; 
        }
        return ans; 
    }
};