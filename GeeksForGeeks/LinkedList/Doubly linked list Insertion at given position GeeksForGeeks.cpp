struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; 

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        // Node* n = data;
        Node* add = new Node(data);
        if(head == NULL) return add;
        
        Node* temp = head;
        int count = 0;
        
        while(temp != NULL && count<pos)
        {
            temp = temp->next;
            count++;
        }
        if(pos == NULL) return head;
        
        add->next = temp->next;
        add->prev = temp;
        
        if(temp->next != NULL)
        {
            temp->next->prev = add;
        }
        temp->next = add;
        
        return head;
        
    }
};