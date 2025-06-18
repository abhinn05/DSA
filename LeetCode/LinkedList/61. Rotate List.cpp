/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int count = 1;
        ListNode* node = head;
        while(node->next)
        {
            node = node->next;
            count++;
        }
        node->next = head;

        k = k%count;
        int steps = count-k;
        ListNode* n = node;
        while(steps--)
        {
            n = n->next;
        }
        ListNode* newHead = n->next;
        n->next = nullptr;
        return newHead;
    }
};