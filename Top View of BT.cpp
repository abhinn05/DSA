/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    vector<int> topView(TreeNode *root) {

        if (root == NULL)
            return {};

        map<int, int> mp;

        queue<pair<TreeNode *, int>> q;

        q.push({root, 0});

        while (!q.empty()) {

            TreeNode *node = q.front().first;
            int hd = q.front().second;

            q.pop();

            if (mp.find(hd) == mp.end()) {
                mp[hd] = node->data;
            }

            if (node->left) {
                q.push({node->left, hd - 1});
            }

            if (node->right) {
                q.push({node->right, hd + 1});
            }
        }

        vector<int> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
