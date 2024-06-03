/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        queue<TreeNode*> q;
        set<int> lvls;
        q.push(root);
        int lvl = 0;
        res.push_back(root->val);
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                TreeNode* top = q.front();
                q.pop();
                if (top->right) {
                    q.push(top->right);
                    if (lvls.count(lvl) == 0) {
                        res.push_back(top->right->val);
                        lvls.insert(lvl);
                    }
                }
                if (top->left) {
                    q.push(top->left);
                    if (lvls.count(lvl) == 0) {
                        res.push_back(top->left->val);
                        lvls.insert(lvl);
                    }
                }
            }
            lvl++;
        }
        return res ; 
    }
};