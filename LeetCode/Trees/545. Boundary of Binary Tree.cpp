/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
public:
    bool isLeaf(TreeNode* root) 
    {
        return !root->left && !root->right;
    }

    void left(TreeNode* root,vector<int>& left)
    {
        TreeNode* curr = root->left;
        while(curr)
        {
            if(!isLeaf(curr))
            {
                left.push_back(curr->data);
            }
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }

    void right(TreeNode* root,vector<int>& right)
    {
        TreeNode* curr = root->right;
        while(curr)
        {
            if(!isLeaf(curr))
            {
                right.push_back(curr->data);
            }
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        reverse(right.begin(),right.end());
    }

    void centre(TreeNode* root,vector<int>& leaves)
    {
        if(isLeaf(root))
        {
            leaves.push_back(root->data);
            return;
        }

        if(root->left) centre(root->left,leaves);
        if(root->right) centre(root->right,leaves);
    }
    vector <int> boundary(TreeNode* root){
    	//your code goes here
        vector<int> ans;

        if(!root) return ans;

        if(!isLeaf(root))
        {
            ans.push_back(root->data);
        }

        left(root,ans);
        centre(root,ans);
        right(root,ans);

        return ans;
    }
};