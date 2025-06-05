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
    void solve(TreeNode* root, int height, int width, map<pair<int,int>, vector<int>>& mp)
    {
        if(!root) return;

        mp[{width,height}].push_back(root->val);

        if(root->left) solve(root->left,height+1,width-1,mp);
        if(root->right) solve(root->right,height+1,width+1,mp);

        return;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        if(!root) return {};

        map<pair<int,int> , vector<int>> mp;

        vector<vector<int>> ans;

        map<int,vector<int>> sortedMap;
        solve(root,0,0,mp);

        for(auto &it : mp)
        {
            int width = it.first.first;
            int height = it.first.second;
            vector<int> temp = it.second;
            sort(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++)
            {
                sortedMap[width].push_back(temp[i]);
            }
        }  
        for(auto it : sortedMap)
        {
            ans.push_back(it.second);
        }

        return ans;

    }
};