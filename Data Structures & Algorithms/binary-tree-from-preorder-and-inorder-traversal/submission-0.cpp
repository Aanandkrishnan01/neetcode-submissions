class Solution {
public:
    int preIndex = 0;
    unordered_map<int, int> mp;

    TreeNode* build(vector<int>& preorder,
                    vector<int>& inorder,
                    int inStart,
                    int inEnd)
    {
        if(inStart > inEnd)
            return nullptr;

        TreeNode* root = new TreeNode(preorder[preIndex]);
        preIndex++;

        int mid = mp[root->val];

        root->left = build(preorder, inorder, inStart, mid - 1);
        root->right = build(preorder, inorder, mid + 1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder)
    {
        for(int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        return build(preorder, inorder, 0, inorder.size() - 1);
    }
};
