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
        void ino(TreeNode* root,vector<int>& one)
        {
            if(root == NULL) return;
            ino(root->left,one);
            one.push_back(root->data);
            ino(root->right,one);
        }
        void pre(TreeNode* root,vector<int>& two)
        {
            if(root == NULL) return;
            two.push_back(root->data);
            pre(root->left,two);
            pre(root->right,two);
        }
        void post(TreeNode* root,vector<int>& three)
        {
            if(root == NULL) return;
            post(root->left,three);
            post(root->right,three);
            three.push_back(root->data);
        }
		vector<vector<int>> treeTraversal(TreeNode* root){
			//your code goes here
            vector<int> one;
            vector<int> two;
            vector<int> three;
            ino(root,one);
            pre(root,two);
            post(root,three);
            vector<vector<int>> tree;
            tree.push_back(one);
            tree.push_back(two);
            tree.push_back(three);

            return tree;
		}
};
