 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;  
        ListNode* tail = nullptr;  
        int carry = 0;

        while (l1 || l2 || carry) 
        {
            int sum = carry;  

            if (l1) 
            {
                sum += l1->val;  
                l1 = l1->next;    
            }

            if (l2) 
            {
                sum += l2->val;  
                l2 = l2->next;    
            }

            carry = sum / 10;  
            int digit = sum % 10;  

            ListNode* newNode = new ListNode(digit);

            if (!head) 
            {
                head = newNode;
                tail = newNode;
            } 
            else 
            {
                tail->next = newNode;
                tail = newNode;  
            }
        }

        return head;  
    }
};
