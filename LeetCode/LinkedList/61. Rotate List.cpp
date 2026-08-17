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
        if(k==0 || head==nullptr || head->next == nullptr) return head;
        vector<int> arr;
        ListNode* curr = head;
        while(curr != nullptr)
        {
            arr.push_back(curr->val);
            curr = curr->next;
        }
        int n = arr.size();
        k = k % n;
        if(k==0) return head;
        vector<int> rotated(n);

        for (int i = 0; i < n; i++) 
        {
            rotated[(i + k) % n] = arr[i];
        }

        ListNode* a = new ListNode(rotated[0]);
        ListNode* b = a;
        for(int i=1;i<rotated.size();i++)
        {
            b->next = new ListNode(rotated[i]);
            b = b->next;
        }
        return a;
    }
};
