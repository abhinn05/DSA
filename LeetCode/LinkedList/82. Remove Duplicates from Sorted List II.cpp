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
    ListNode* deleteDuplicates(ListNode* head) {
       unordered_map<int,int> freq;
       ListNode* node = head;
       while(node)
       {
            freq[node->val]++;
            node = node->next;
       }

       vector<int> unique;
       for(auto& [key,count] : freq)
       {
            if(count == 1)
            {
                unique.push_back(key);
            }
       }
       sort(unique.begin(),unique.end());

       ListNode* newhead = nullptr;
       ListNode* tail = nullptr;

       for(int key : unique)
       {
            ListNode* newNode = new ListNode(key);
            if (!newhead) 
            {
                newhead = tail = newNode;
            } 
            else 
            {
                tail->next = newNode;
                tail = newNode;
            }
       }
       return newhead;
    }
};