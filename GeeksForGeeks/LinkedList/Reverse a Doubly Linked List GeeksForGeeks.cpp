class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL || head->next==NULL) return head;
        
        DLLNode* prev = NULL;
        DLLNode* current = head;
        while(current!=NULL)
        {
            prev = current->prev;
            current->prev = current->next;
            current->next=prev;
            
            current = current->prev;
        }
        
        return prev->prev;
    }
};