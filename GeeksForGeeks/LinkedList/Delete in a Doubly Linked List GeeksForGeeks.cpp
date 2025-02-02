class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* temp = head;
        int count = 0;
        if(head==NULL) return NULL;
        
        while(temp != NULL)
        {
            count++;
            if(count == x) break;
            
            temp = temp->next;
        }
        
        Node* prev = temp->prev;
        Node* front = temp->next;
        
        if(prev==NULL && front ==NULL)
        {
            return NULL;
        }
        
        else if(prev == NULL)
        {
            Node* n = head;
            head = head->next;
            
            n->next = nullptr;
            head->prev = nullptr;
            
            delete n;
            return head;
        }
        
        else if(front == NULL)
        {
            temp->prev->next=nullptr;
            temp->prev=nullptr;
            
            delete temp;
            return head;
        }
        
        prev->next = front;
        front->prev = prev;
        
        temp->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        return head;
    }
};