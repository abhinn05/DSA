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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0) return nullptr;

        return build(nums,0,nums.size()-1);
    }
    private:

    TreeNode* build(vector<int>& nums,int start, int end)
    {
        if(start > end) return nullptr;

        int maxi = start;
        for(int i=start+1;i<=end;i++)
        {
            if(nums[i] > nums[maxi])
            {
                maxi = i;
            }
        }

        TreeNode* root = new TreeNode(nums[maxi]);

        root->left = build(nums,start,maxi-1);
        root->right = build(nums,maxi+1,end);

        return root;
    }
};