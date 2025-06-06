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
    int floorBST(TreeNode* root, int k) {
        
        if(root == nullptr) return root;
        int floor = -1;
        while(root)
        {
            if(root->val == k) 
            {
                floor = root->val;
                return floor;
            }
            if(k > root->val)
            {
                floor = root->val;
                root = root->right;
            }

            else 
            {
                root = root->left;
            }
        }
        return floor;
    }
};