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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> arr;

        if(root == nullptr) return arr;

        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            vector<int> lvl;
            for(int i=0;i<size;i++)
            {
                Node* temp = q.front();
                q.pop();
                lvl.push_back(temp->val);

                for(auto u : temp->children)
                {
                    q.push(u);
                }
            }
            arr.push_back(lvl);
        }
        return arr;
    }
};