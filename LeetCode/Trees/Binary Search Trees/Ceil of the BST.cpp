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
    int ceilBST(TreeNode* root, int k) {
        
        if(root == nullptr) return root;
        int ceil = -1;
        while(root)
        {
            if(root->val == k) 
            {
                ceil = root->val;
                return ceil;
            }
            if(k > root->val)
            {
                root = root->right;
            }

            else 
            {
                ceil = root->val;
                root = root->left;
            }
        }
        return ceil;
    }
};