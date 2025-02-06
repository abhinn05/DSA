/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        if(*head_ref == nullptr) return;
        
        Node* temp = *head_ref;
        while(temp)
        {
            if(temp->data == x)
            {
                Node* ok = temp;
                if(temp == *head_ref)
                {
                    *head_ref = temp->next;
                    if (*head_ref != nullptr) 
                    {
                        (*head_ref)->prev = nullptr; 
                    }
                }
                else
                {
                    if (temp->prev != nullptr) 
                    {
                        temp->prev->next = temp->next;
                    }
                    if (temp->next != nullptr) 
                    {   
                        temp->next->prev = temp->prev;
                    }   
                }
                Node* toDelete = temp;
                temp = temp->next; 
                delete toDelete;    
            }
            
            else
            {
                temp = temp->next;
            }
        }
    }
};