class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        while (curr) 
        {
            ListNode* next_temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_temp;
        }
        slow->next = nullptr; 

        ListNode* first = head;
        ListNode* second = prev;
        while (second) 
        {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};
