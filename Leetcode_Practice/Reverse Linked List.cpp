class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //iterative approach
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr != NULL)
        {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
        
    }
};