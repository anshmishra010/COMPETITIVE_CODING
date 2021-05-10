class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // will be breaking the link and then returnig the null pointer
        
        ListNode* empty = new ListNode(0);
        empty->next= head;
        ListNode* first = empty;
        ListNode* second = empty;
        
        for(int i=0;i<n+1;i++){
            first = first->next;
        }
        while(first != NULL){
            // making the first ptr to move n+1 step
            first = first->next;
            second = second->next;
        }
        //now second ptr is just behind the node to be deleted
        //changing the link
        second->next = second->next->next;
        return empty->next;
    }
};