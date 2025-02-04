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
    bool isPalindrome(ListNode* head) {
        vector<int> array;
        while(head)
        {
            array.push_back(head->val);
            head = head->next;
        }

        vector<int> result;
        for(int i=0;i<array.size();i++)
        {
            result.push_back(array[i]);
        }
        reverse(result.begin(),result.end());
        if(result == array) return true;

        return false;
    }
};