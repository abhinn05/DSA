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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> result;
        for (auto head : lists) 
        {
            while (head != nullptr) 
            {
                result.push_back(head->val);
                head = head->next;
            }
        }
        sort(result.begin(),result.end());

        if (result.empty()) return nullptr;

        ListNode* newHead = new ListNode(result[0]);
        ListNode* current = newHead;

        for (int i = 1; i < result.size(); i++) 
        {
            current->next = new ListNode(result[i]);
            current = current->next;
        }

        return newHead;        
    }
};