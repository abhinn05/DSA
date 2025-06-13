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
    int swaping(vector<int>& lvl, int& swaps)
    {
        int n = lvl.size();
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++) 
        {
            arr[i] = {lvl[i], i};
        }

        sort(arr.begin(), arr.end());

        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) 
        {
            if (visited[i] || arr[i].second == i) continue;

            int cycle_size = 0;
            int j = i;

            while (!visited[j]) 
            {
                visited[j] = true;
                j = arr[j].second;
                cycle_size++;
            }

            if (cycle_size > 1) 
            {
                swaps += (cycle_size - 1);
            }
        }
        return swaps;
    }
    int minimumOperations(TreeNode* root) {
        if(!root) return 0;
        
        vector<vector<int>> arr;
        int swaps = 0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            vector<int> lvl;

            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                lvl.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            arr.push_back(lvl);
        }
        for(auto t : arr)
        {
            swaping(t,swaps);
        }
        return swaps;
    }
};