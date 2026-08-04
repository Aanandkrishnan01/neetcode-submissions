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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)
        {
            return ans;
        }
        queue<TreeNode*> level;
        level.push(root);
        while(!level.empty())
        {
            vector<int> state;
            int n=level.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node=level.front();
                level.pop();
                state.push_back(node->val);
                if(node->left)
                {
                    level.push(node->left);
                }
                if(node->right)
                {
                    level.push(node->right);
                }
            }
            ans.push_back(state);
        }
        return ans;
    }
};
