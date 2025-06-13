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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return root;

        queue<TreeNode*> q;
        q.push(root);

        bool isOdd = false;
        while(!q.empty())
        {
            int size = q.size();
            vector<TreeNode*> lvl;
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                lvl.push_back(node);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            if(isOdd)
            {
                int i = 0;
                int j = lvl.size() - 1;

                while(i<j)
                {
                    swap(lvl[i]->val,lvl[j]->val);
                    i++;
                    j--;
                }
            }
            isOdd = !isOdd;
        }
        return root;
    }
};