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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums, 0, nums.size());
    }
    
    TreeNode* construct(vector<int>& nums, int l, int r) {\
        if(l == r)
            return nullptr;
        int maxIndex = max(nums, l, r);
        TreeNode* node = new TreeNode(nums[maxIndex]);
        node->left = construct(nums, l, maxIndex);
        node->right = construct(nums, maxIndex + 1, r);
        return node;
    }
    
    int max(vector<int>& nums, int l, int r) {
        int maxIndex = -1, max = -1;
        for(int i = l; i < r; i++){
            if(max < nums[i]){
                maxIndex = i;
                max = nums[maxIndex];
            }
        }
        
        return maxIndex;
    }
};