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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return nullptr;
        long long count = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        count = (count / 2);

        ListNode* x = head;
        
        ListNode* del = head;
        for(int i=0;i<count;i++)
        {
            x = del;
            del = del->next;
        }
        x->next = del->next;
        delete del;
        return head;
    }
};