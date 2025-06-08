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
    vector<int> pre(TreeNode* root,vector<int>& arr)
    {
        if(root==nullptr) return arr;

        arr.push_back(root->val);

        pre(root->left,arr);
        pre(root->right,arr);

        return arr;
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr) return false;

        TreeNode* node = root;
        vector<int> arr;
        pre(node,arr);
        int n = arr.size();
        int left = 0;
        int right = n-1;
        sort(arr.begin(),arr.end());
        while(left<right)
        {
            int sum = arr[left] + arr[right];
            if(sum == k) return true;
            else if(sum<k) left++;
            else if(sum>k) right--;
        }   
        return false;  

    }
};