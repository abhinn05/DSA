class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root == NULL) return {};

        map<int, vector<int>> mp;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        while(!q.empty())
        {
            int n = q.size();
            map<int, vector<int>> curr;

            while(n--)
            {
                TreeNode* node = q.front().first;
                int hd = q.front().second;
                q.pop();
                curr[hd].push_back(node->val);

                if(node->left) q.push({node->left, hd - 1});

                if(node->right) q.push({node->right, hd + 1});
            }
            for(auto x : curr)
            {
                sort(x.second.begin(), x.second.end());
                for(int val : x.second) mp[x.first].push_back(val);
            }
        }

        vector<vector<int>> ans;
        for(auto x : mp)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};
