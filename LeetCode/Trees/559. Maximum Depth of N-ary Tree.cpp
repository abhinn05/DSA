/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;

        int maxi = 0;

        for(auto n : root->children)
        {
            maxi = max(maxi,maxDepth(n));
        }
        return maxi + 1;
    }
};