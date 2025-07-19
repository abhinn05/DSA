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
        int size = 0;
		int largestBST(TreeNode* root){
			//your code goes here
            if(!root) return 0;

            if(isBST(root,INT_MIN,INT_MAX))
            {
                int curr = count(root);
                size = max(size,curr);
            }

            largestBST(root->left);
            largestBST(root->right);

            return size;
		}
        
        bool isBST(TreeNode* root,int minVal, int maxVal)
        {
            if(!root) return true;
            if(root->data <= minVal || root->data >= maxVal) return false;

            return isBST(root->left,minVal,root->data) && isBST(root->right,root->data,maxVal);
        }
        int count(TreeNode* root)
        {
            if(!root) return 0;

            return 1 + count(root->left) + count(root->right);
        }
};