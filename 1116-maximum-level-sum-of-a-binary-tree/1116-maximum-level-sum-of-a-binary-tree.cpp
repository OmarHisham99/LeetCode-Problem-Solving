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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0 ; 
        map<int,int> lvls ; 
        int ans = INT_MIN ; 
        int res = 0 ;
        queue<TreeNode*> q ; 
        q.push(root); 
        int lvl = 1 ;
        lvls[lvl] += root->val ; 
        lvl++; 
        while(!q.empty()){
            int size = q.size();
            while(size--){
                TreeNode* top = q.front(); 
                q.pop();
                if(top->left){
                    q.push(top->left); 
                    lvls[lvl]+=top->left->val; 
                }
                if(top->right){
                    q.push(top->right); 
                    lvls[lvl]+=top->right->val; 
                }
            }
            lvl++; 
        }
        for(auto it = lvls.begin();it!=lvls.end();it++){
            if(it->second > ans) {
                ans = it->second;
                res = it->first;
            }
        }
    return res ; 
    }
};