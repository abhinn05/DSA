 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* slow = headA;
        ListNode* fast = headB;
        vector<int> a;
        vector<int> b;
        while(slow != fast)
        {
            slow = slow ? slow->next : headB;
            fast = fast ? fast->next : headA;
        }
        return slow;

    }
};