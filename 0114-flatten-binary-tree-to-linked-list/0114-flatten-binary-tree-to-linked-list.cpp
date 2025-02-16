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
    void flatten(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> tr;
        s.push(root);
        while(!s.empty()) {
            TreeNode* temp = s.top();
            s.pop();
            if(temp) {
                tr.push_back(temp->val);

                if(temp->right) s.push(temp->right);

                if(temp->left) s.push(temp->left);
            }
        }
        for(int i: tr) {
            cout<<i<<" ";
        }

        TreeNode* curr = root;

        for(int i = 0; i < tr.size(); i++) {
            TreeNode* temp = new TreeNode();
            curr->val = tr[i];
            curr->left = nullptr;
            if(i == tr.size() - 1) {
                curr->right = nullptr;
            } else {
                curr->right = temp;
            }
            
            curr = temp;
        }
    }
};