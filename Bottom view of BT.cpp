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
    vector <int> bottomView(TreeNode *root){
    	//your code goes here
        if(root == NULL) return {};

        vector<vector<int>> mp;

        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while(!q.empty())
        {
            int n = q.size();

            for(int i=0;i<n;i++)
            {
                TreeNode* node = q.front().first;
                int idx = q.front().second;
                q.pop();

                mp.push_back({node->data, idx});

                if (node->left)
                {
                    q.push({node->left, idx - 1});
                }

                if (node->right)
                {
                    q.push({node->right, idx + 1});
                }
            }
        }
        int minHD = mp[0][1];
        int maxHD = mp[0][1];

        for (int i = 1; i < mp.size(); i++)
        {
            minHD = min(minHD, mp[i][1]);
            maxHD = max(maxHD, mp[i][1]);
        }

        vector<int> arr(maxHD - minHD + 1,0);

        for (int i = 0; i < mp.size(); i++)
        {
            int value = mp[i][0];
            int hd = mp[i][1];

            arr[hd - minHD] = value;
        }
        return arr;
    }
};
