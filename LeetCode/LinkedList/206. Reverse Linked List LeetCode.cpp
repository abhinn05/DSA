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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* temp = head;
        stack<int> n;
        while(temp!=NULL)
        {
            n.push(temp->val);
            temp = temp->next;
        }
        ListNode* newNode = new ListNode(n.top());
        n.pop();
        ListNode* current = newNode;
        while(!n.empty())
        {
            current->next = new ListNode(n.top());
            n.pop();
            current = current->next;
        }
        return newNode;
    }
};