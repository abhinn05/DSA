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

    int maxDepth(TreeNode* root, int& d)
    {
        if(root == nullptr) return 0;

        int left = maxDepth(root->left,d);
        int right = maxDepth(root->right,d);
        d = max(d,left+right);

        return max(left,right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) { 
       int d = 0;
       maxDepth(root,d);
       return d;

    }
};