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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;

        if(key < root->val) root->left = deleteNode(root->left,key);
        else if(key > root->val) root->right = deleteNode(root->right,key);
        else
        {
            if(!root->left && !root->right) return nullptr;
            else if(!root->left) return root->right;
            else if(!root->right) return root->left;
            else
            {
                TreeNode* curr = minVal(root->right);
                root->val = curr->val;
                root->right = deleteNode(root->right,curr->val);
            }
        }
        return root;
    }

    TreeNode* minVal(TreeNode* root)
    {
        while(root->left) root = root->left;
        return root;
    }
};