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
    vector<vector<int>> level(TreeNode* root)
    {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> lvl;
            int s = q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node)
                {
                    lvl.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
                else lvl.push_back(-101);
            }
            ans.push_back(lvl);
        }
        return ans;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;

        TreeNode* left = root->left;
        TreeNode* right = root->right;

        vector<vector<int>> l;
        vector<vector<int>> r;
        l.push_back({root->val});
        r.push_back({root->val});
        l = level(left);
        r = level(right);

        if(l.size() != r.size()) return false;
        for(int i=0;i<l.size();i++)
        {
            reverse(r[i].begin(),r[i].end());
        }

        for(int i=0;i<l.size();i++)
        {
            for(int j=0;j<l[i].size();j++)
            {
                if(l[i][j] != r[i][j]) return false;
            }
        }

        return true;
    }
};