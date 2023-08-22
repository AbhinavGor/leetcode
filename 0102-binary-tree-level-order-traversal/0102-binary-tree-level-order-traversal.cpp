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
        vector<vector<int>> res;
        
        
        if(!root) return res;
        bfs(root, res);
        
        return res;
    }
    
    vector<vector<int>> bfs(TreeNode* root, vector<vector<int>>& res) {
        queue<TreeNode*> q;
        
        q.push(root);
        vector<int> temp;
        
        while(!q.empty()) {
            int count = q.size();
            for(int i = 0; i < count; i++) {
                temp.push_back(q.front()->val);
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(temp);
            temp = {};
        }
        
        return res;
    }
};