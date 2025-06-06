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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;

        queue<pair<TreeNode*,int>> q;
        q.push({root,0});

        while(!q.empty())
        {
            int s = q.size();
            int m = q.front().second;

            int f,l;
            for(int i=0;i<s;i++)
            {
                long c = q.front().second - m;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) f = c;
                if(i==s-1) l = c;

                if(node->left) q.push({node->left,c*2+1});

                if(node->right) q.push({node->right,c*2+2});
            }
            ans = max(ans,l-f+1);
        }
        return ans;
    } 
};