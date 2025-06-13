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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth == 1)
        {
            TreeNode* n = new TreeNode(val);
            n->left = root;
            return n;
        }

        queue<TreeNode*> q;
        q.push(root);
        int count = 0;

        while(!q.empty())
        {
            int a = q.size();
            count++;

            while(a--)
            {
                TreeNode* curr = q.front();
                q.pop();

                if(count != depth - 1)
                {
                    if(curr->left) q.push(curr->left);
                    if(curr->right) q.push(curr->right);
                }
                else
                {
                    TreeNode* b = new TreeNode(val);
                    b->left = curr->left;
                    curr->left = b;

                    TreeNode* c = new TreeNode(val);
                    c->right = curr->right;
                    curr->right = c;
                }
            }
        }
        return root;
    }
};