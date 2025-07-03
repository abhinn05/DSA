/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>map;
        Node* curr = head;
        while(curr)
        {
            map[curr] = new Node(curr->val);
            curr = curr->next;
        }
        curr = head;
        while(curr)
        {
            Node* copy = map[curr];
            copy->next = map[curr->next];
            copy->random = map[curr->random];
            curr = curr->next;
        }
        return map[head];
    }
};