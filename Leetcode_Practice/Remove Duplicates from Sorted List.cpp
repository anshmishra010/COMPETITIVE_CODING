class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr!= NULL && curr->next != NULL)
        {
            if(head->val == head->next->val)
            {
                head= head->next;
                curr = head;
            }
            else if(curr->val == curr->next->val)
            {
                prev->next = curr->next;
                curr = curr->next;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }

        }
        return head;
        
    }
};