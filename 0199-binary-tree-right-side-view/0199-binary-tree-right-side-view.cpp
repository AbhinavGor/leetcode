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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> tmp, res2;
        vector<vector<int>> res1;
        
        q.push(root);
        
        while(!q.empty()) {
            int count = q.size();
            for(int i = 0; i < count; i++) {
                TreeNode* node = q.front();
                if(node) {
                    tmp.push_back(node->val);
                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
                }
                q.pop();
            }
            res1.push_back(tmp);
            tmp = {};
        }
        
        for(int i = 0; i < res1.size(); i++){
            if(res1[i].size() > 0) res2.push_back(res1[i].back());
        }
        
        for(auto i: res1){
            for(auto j: i)
                cout<<j<<' ';
            cout<<"\n";
        }
        return res2;
    }
};