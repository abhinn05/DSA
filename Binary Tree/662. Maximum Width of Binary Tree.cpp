class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;

        int width = 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        while (!q.empty()) 
        {
            int n = q.size();
            long long first = q.front().second;
            long long left = 0, right = 0;

            for (int i = 0; i < n; i++) 
            {
                TreeNode* node = q.front().first;
                long long idx = q.front().second - first;
                q.pop();

                if (i == 0) left = idx;
                if (i == n - 1) right = idx;

                if (node->left) q.push({node->left, 2 * idx + 1});
                if (node->right) q.push({node->right, 2 * idx + 2});
            }

            width = max(width, (int)(right - left + 1));
        }

        return width;
    }
};
