struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        if (head == nullptr) return nullptr;
        
        Node* temp = head;
        while(temp->next != nullptr && temp != nullptr)
        {
            
            if(temp->data == temp->next->data)
            {
                Node* ok = temp->next;
                temp->next = temp->next->next;
                if (temp->next != nullptr) 
                {
                    temp->next->prev = temp;
                }
                delete ok;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};