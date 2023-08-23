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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        dfs(res, root);
        return res[k-1];
    }
    
    void dfs(vector<int>& res, TreeNode* node) {
        if(node != NULL && node->left) dfs(res, node->left);
        res.push_back(node->val);
        if(node != NULL && node->right) dfs(res, node->right);
    }
};