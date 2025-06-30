/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    if(!A) return A;
    vector<int> arr;
    ListNode* node = A;
    
    while(node)
    {
        arr.push_back(node->val);
        node = node->next;
    }
    
    for(int i=1;i<arr.size();i++)
    {
        int key = arr[i];
        int j = i-1;
        
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    
    ListNode* B = new ListNode(arr[0]);
    ListNode* curr = B;
    
    for(int i=1;i<arr.size();i++)
    {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    
    return B;
}
