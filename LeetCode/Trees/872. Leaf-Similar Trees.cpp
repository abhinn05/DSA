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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l1;
        vector<int> l2;
        dfs(root1,l1);
        dfs(root2,l2);

        return l1 == l2;
    }
    void dfs(TreeNode* node,vector<int>& leaves)
    {
        if(node == nullptr) return;

        if(node->left == nullptr && node->right == nullptr) leaves.push_back(node->val);
        
        dfs(node->left,leaves);
        dfs(node->right,leaves);
    }
};