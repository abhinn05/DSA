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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> a;

        for(int i=0;i<inorder.size();i++)
        {
            a[inorder[i]] = i;
        }

        return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,a);
    }

    private:
    TreeNode* build(vector<int>& preorder,int preStart,int preEnd,vector<int>& inorder,int  inStart,int inEnd, unordered_map<int,int>& inMap)
    {
        if(preStart > preEnd || inStart > inEnd) return nullptr;
        int rootval = preorder[preStart];
        TreeNode* root = new TreeNode(rootval);

        int inRoot = inMap[rootval];

        int lefts = inRoot - inStart;

        root->left = build(preorder,preStart+1,preStart + lefts,inorder,inStart,inRoot-1,inMap);

        root->right = build(preorder,preStart+lefts+1,preEnd,inorder,inRoot+1,inEnd,inMap);

        return root;
    }
    
};