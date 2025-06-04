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
    int maxsum = INT_MIN;
    int sum(TreeNode* root)
    {

        if(root == nullptr) return 0;

        int left = max(sum(root->left),0);
        int right = max(sum(root->right),0);

        int newsum = root->val + left + right;
        maxsum = max(maxsum,newsum);

        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        sum(root);
        return maxsum;
    }
};