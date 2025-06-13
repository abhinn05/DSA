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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> arr;

        if(root == nullptr) return arr;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            vector<int> lvl;
            int size = q.size();

            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                lvl.push_back(node->val);

                if(node->left != nullptr) q.push(node->left);

                if(node->right != nullptr) q.push(node->right);
            }
            double sum = 0;
            double avg = 0;
            for(int i=0;i<lvl.size();i++)
            {
                sum = sum + lvl[i];
                avg = sum/lvl.size();
            }
            arr.push_back(avg);
        }
        return arr;
    }
};