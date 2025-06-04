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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qp, qq;
        qp.push(p);
        qq.push(q);

        while (!qp.empty() && !qq.empty()) {
            TreeNode* node1 = qp.front(); qp.pop();
            TreeNode* node2 = qq.front(); qq.pop();

            if (!node1 && !node2) continue;
            if (!node1 || !node2) return false;
            if (node1->val != node2->val) return false;

            qp.push(node1->left);
            qp.push(node1->right);
            qq.push(node2->left);
            qq.push(node2->right);
        }

        return qp.empty() && qq.empty();
    }
};