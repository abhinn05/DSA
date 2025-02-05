  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        if(!head || !head->next) return head;
        
        Node* temp = head;
        vector<int> b;
        while(temp)
        {
            b.push_back(temp->data);
            temp = temp->next;
        }
        sort(b.begin(),b.end());
        temp = head;
        for(int val : b)
        {
            temp->data = val;
            temp = temp->next;
        }
        return head;
    }
};